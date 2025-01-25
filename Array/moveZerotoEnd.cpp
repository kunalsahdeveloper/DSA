
#include<iostream>
using namespace std;


void moveZeros(int arr[], int n){

    
    //naive approach

    // for(int i=0; i<n; i++){
    //     if(arr[i] == 0){
    //         for(int j=i; j<n; j++){
    //             if(arr[j] != 0){
    //                 swap(arr[i], arr[j]);
    //             }
    //         }
    //     }
    // }


    //T.C : O(n) 

    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0 ){
            swap(arr[i], arr[count]);
            count++;
        }

    }


    //for printing arr
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int n;
    // int arr[6] = {0,0,56,0,4,0};
    // int arr[] = {1, 2, 0, 0, 0, 3, 6};
    //  n=7;
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}; 
    n=13;

    moveZeros(arr, n);

    return 0;
}