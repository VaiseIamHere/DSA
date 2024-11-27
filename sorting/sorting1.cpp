#include<iostream>
using namespace std;

void selection_sort(int *arr, int size){
    int index, temp;
    for(int i=0; i<size-1; ++i){
        index = i;
        for(int j=i; j<size; ++j){
            if(arr[j] <  arr[index])    index = j;
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

void bubble_sort(int *arr, int size){
    int temp;
    for(int i=0; i<size-1; ++i){
        for(int j=0; j<size-1; ++j){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertion_sort(int *arr, int size){
    int temp, i, j;
    for(i=0; i<size-1; ++i){
        if(arr[i] > arr[i+1]){
            temp = arr[i+1];
            for(j=i; j>=0; --j){
                if(temp < arr[j])   arr[j+1] = arr[j];
                else break;
            }
            arr[j+1] = temp;
        }
    }
}

int main(){
    int a[] = {4, 5, 1, 6, 7, 8, -1, -10, 100, 50};

    // selection_sort(a, 10);
    // bubble_sort(a, 10);
    // insertion_sort(a, 10);

    for(int i: a){
        cout <<i<< " ";
    }
    return 0;
}
