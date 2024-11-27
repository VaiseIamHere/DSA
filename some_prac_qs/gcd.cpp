#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    static vector<long long> lcmAndGcd(long long A , long long B) {
        long long gcd=1, a=A, b=B;
        vector<long long> x;
        while(a > 0 && b > 0){
            if(a > b)   a %= b;
            else        b %= a;
        }
        if(a == 0)      gcd = b;
        else            gcd = a;
        x.emplace_back((A * B)/gcd);
        x.emplace_back(gcd);
        return x;
    }
};

int main(){
    vector<long long> v = Solution::lcmAndGcd(50, 100);
    cout << endl << v[0] << "  " << v[1];
    return 0;
}
