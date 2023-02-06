#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void revArray(int arr[], int n){
    int start=0, end=n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    revArray(arr, 5); 
    cout << "reverse: ";
    printArr(arr, 5);
    return 0;
}