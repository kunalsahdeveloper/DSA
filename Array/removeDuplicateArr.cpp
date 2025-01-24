
// Given a sorted array, the task is to remove the duplicate elements from the array.

// Examples: 

// Input  : arr[] = {2, 2, 2, 2, 2}
// Output : arr[] = {2}
//          new size = 1

// Input  : arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}
// Output : arr[] = {1, 2, 3, 4, 5}
//          new size = 5



#include<iostream>
using namespace std;


// int removeDuplicateInSortedArr(int arr[], int n){
//     int temp[n];
//     temp[0] = arr[0];

//     int res = 1;

//     for(int i=1; i<n; i++){
//         if(arr[i] != temp[res-1]){
//             temp[res] = arr[i];
//             res++;
//         }
//     }

//     for(int i=0; i<res; i++){               // not require but copying temp arr value to original arr
//         arr[i] = temp[i];
//     }

//     return res;

//     // T.C = O(n)
//     // S.C = O(n)
// }



// more efficient solution
int removeDuplicateInSortedArr(int arr[], int n){

    int res = 1;
    for(int i=1; i<n; i++){
        if(arr[res-1] != arr[i]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;

    // T.C = O(n)
    // S.C = O(1)

}

int main(){

    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    cout<<removeDuplicateInSortedArr(arr, 9);

    return 0;
}