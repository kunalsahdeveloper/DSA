#include<iostream>
using namespace std ;

// Our Task: Given an array of integers of size 'n'. Our aim is to calculate 
//the maximum sum of 'k' consecutive elements in the array.

int maximumSumofKConsecutiveElement(int arr[], int n, int k){

    int curr = 0;
    for(int i=0; i<k; i++){
        curr += arr[i];
    }

    int res = curr;
    for(int i=k; i<n; i++){
        curr = curr + arr[i] - arr[i-k];
        res = max(res, curr);
    }

    return res;

}



int main(){

    // int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int arr[] = {100, 200, 300, 400};
    int n = sizeof(arr)/sizeof(arr[0]);  
    int k = 2 ;

    cout<<maximumSumofKConsecutiveElement(arr, n, k);

    return 0;
}