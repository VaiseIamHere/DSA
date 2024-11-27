#include<bits/stdc++.h>
using namespace std;


void frequencyCount(vector<int>& arr, int N, int P) {
    int min = (N > P)? P : N;
    vector<int> f(min);
    for(int i=0; i<N; ++i){
        if(arr[i] > min){
            arr[i] = 0;
        }
        else{
            ++f[arr[i] - 1];
            arr[i] = 0;
        }
    }
    for(int i = 0; i<min; ++i){
        arr[i] = f[i];
    }
}


int main(){
    vector<int> a;
    a.push_back(8);
    a.push_back(9);
    // a.push_back(3);
    // a.push_back(3);
    // a.push_back(5);
    // cout << a.size();
    frequencyCount(a, 2, 9);
    for(int i: a){
        cout << i << " ";
    }
    return 0;
}
