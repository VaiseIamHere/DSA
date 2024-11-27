#include<iostream>
#include<typeinfo>
using namespace std;

// Bhai we can pass function's as reference 

bool comp1(int a, int b){
    return (a>b)?true:false;
}

bool comp2(int a, int b, int c){
    return 3.4f;
}

bool c1234(string x){
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    return &x;
}

int main(){
    // cout << c(comp2);
    auto x = c1234;
    cout << typeid(x).name();
    return 0;
}
