#include<iostream>
using namespace std;



// // naive solution
// int maxDiff(int arr[], int n){

//     int diff = arr[1]-arr[0];
    
//     for(int i=0; i<n-1; i++){

//         for(int j=i+1; j<n; j++){
//             diff = max(diff, arr[j]- arr[i]);
//         }  

//     }
//     return diff;
// }

//Efficient Solution
int maxDiff(int arr[], int n){

    int res = arr[1] - arr[0];
    int minVal = arr[0];

    for(int i=1; i<n; i++){
        res = max(res, arr[i]-minVal);
        minVal = min(minVal, arr[i]);
    }
    
    return res;
}





int main(){
    // int arr[]  = {2,3,10,6,4,8};
    int arr[] = {7, 9, 5, 6, 3, 2};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxDiff(arr, n);

    return 0;
}