#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void quick_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivot = arr[start], less = start;
        for (int i = start; i <= end; ++i)
        {
            if (pivot > arr[i])
                ++less;
        }
        swap(arr, start, less);
        for (int i = 0, j = 0; i <= end; ++i)
        {
            if (pivot > arr[i])
                swap(arr, i, j++);
        }
        quick_sort(arr, start, less - 1);
        quick_sort(arr, less + 1, end);
    }
}

void merge(int arr[], int start, int mid, int end)
{
    vector<int> tempArr;
    int i1 = start, i2 = mid, check = end - start;
    for (i1 = start, i2 = mid; i1 <= mid - 1 && i2 <= end;)
    {
        if (arr[i1] < arr[i2])
        {
            tempArr.push_back(arr[i1++]);
        }
        else
        {
            tempArr.push_back(arr[i2++]);
        }
    }
    if (i1 == mid)
    {
        while (i2 <= end)
        {
            tempArr.push_back(arr[i2++]);
        }
    }
    if (i2 > end)
    {
        while (i1 <= mid - 1)
        {
            tempArr.push_back(arr[i1++]);
        }
    }
    for (int j = 0; j <= check; ++j)
    {
        arr[start + j] = tempArr[j];
    }
}

void merge_sort(int *arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);

        merge(arr, start, mid + 1, end);
    }
}

int main()
{
    int a[] = {5, 2, 9, 8, 7, 5, 6, 4, 4, 3, 5};
    int b[] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9, 11, 13};
    merge_sort(a, 0, 10);
    for (int i = 0; i < 11; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}
