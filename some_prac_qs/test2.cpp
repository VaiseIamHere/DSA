#include<iostream>
using namespace std;

void call(int x){
    cout << x;
}

int main(){
    int a = 1;
    call(a++);
    return 0;
} 
