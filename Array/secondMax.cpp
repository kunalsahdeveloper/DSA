#include<iostream>
using namespace std;


int secondMaximum( int arr[], int n){


    int res =-1, largest = 0;

    for(int i=1; i<n; i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }

        else if(arr[i] != arr[largest]){
            if((res == -1)  || (arr[i] > arr[res])){
                res = i;
            }

        }

    }
    return res;



}


int main(){

    // int arr[] = {20,20,56, 22};
    // cout<<secondMaximum(arr, 4);

    // int arr[] = {10, 5, 8, 20};
    // cout<<secondMaximum(arr, 4);
    
    int arr[] = {20,10, 20, 8, 12};
    cout<<secondMaximum(arr, 5);

}