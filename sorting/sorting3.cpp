#include<iostream>
using namespace std;

void count_sort(int arr[], int size){
    int i, max, temp, j;
    max = arr[0];
    for(i=0; i<size; ++i){
        if(arr[i] > max)    max = arr[i];
    }
    int count[max+1];
    for(i=0; i<=max; ++i){
        count[i] = 0;
    }
    for(i=0; i<size; ++i){
        count[arr[i]]++;
    }
    j = 0;
    for(i=0; i<=max; ++i){
        temp = count[i];
        while(temp != 0){
            arr[j] = i;
            ++j, --temp;
        }
    }
}

int input(int arr[]){
    int size;
    cout << "Enter no. element: ";
    cin >> size;
    for(int i=0; i<size; ++i){
        cout << "Enter element: ";
        cin >> arr[i];
    }
    return size;
}

void display(int arr[], int size){
    cout << "Array: ";
    for(int i=0; i<size; ++i){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[100];
    int size = input(arr);

    count_sort(arr, size);
    display(arr, size);
    return 0;
}
