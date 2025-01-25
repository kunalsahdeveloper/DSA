#include<iostream>
using namespace std;

// What is meant by the Left Rotation of an Array by D places?
// Left Rotation means a rotation that happens Counter-Clockwise (anticlockwise). The elements are moved 
// counterclockwiseby D number of places, which results in the 
// elements moving back by D positions from their initial position.

// Examples:  

// Input: arr[] = {1, 2, 3, 4, 5, 6, 7}, d = 2
// Output: 3 4 5 6 7 1 2
 
// Input: arr[] = {3, 4, 5, 6, 7, 1, 2}, d=2
// Output: 5 6 7 1 2 3 4
 

// We have 3 approaches to solve the problem: Naive Approach, Better Approach, and Reversal Approach
//(Efficient Approach)

// 1) Naive Approach:
// In this approach, we rotate the array by one position for D times.

// Time Complexity: O(nd)
// Space Complexity: O(1)

// void leftRotateByOne(int arr[], int n){
//     int temp = arr[0];
//     for(int i=1; i<n; i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
// }

// void leftRotate(int arr[], int n, int d){
//     for(int i=0; i<d; i++){
//         leftRotateByOne(arr, n);
//     }
// }


// 2) Better Approach:
// In this approach, we store the first D elements of the array in a new array, and 
// shift the remaining elements by D positions to the left. Finally we copy back 
// the D elements from the new array to the end of the original array.

// Time Complexity: Theta(n)
// Space Complexity: Theta(d)

// void leftRotate(int arr[], int n, int d){

//     int temp[d];
//     for(int i=0; i<d; i++){
//         temp[i] = arr[i];
//     }

//     for(int i=d; i<n; i++){
//         arr[i-d] = arr[i];
//     }

//     for(int i=0; i<d; i++){
//         arr[n-d+i] = temp[i];
//     }
// }

//----------------------------------------------------------------

// 3) Reversal Approach (Efficient):
// This approach consists of 3 reversal steps:

// Reverse the elements from 0 to d-1 index
// Reverse the elements from d to n-1 index
// finally reverse the whole array
// Time Complexity: Theta(n)

// Space Complexity: Theta(1)


void rev(int arr[], int low, int high){

    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotate(int arr[], int n, int d){

    rev(arr, 0, d-1);
    rev(arr, d, n-1);
    rev(arr, 0, n-1);
}



int main(){
    int d, n;
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; d = 2; n=sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr,n,d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
