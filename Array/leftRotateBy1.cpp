#include<iostream>
using namespace std;    

//left rotation means rotation by anti clockwise

// Example:

// Input:  arr[] = {1,2,3,4,5}
// Output: arr[] = {2,3,4,5,1}

// Input:  arr[] = {30,5,20}
// Output: arr[] = {5,20,30}

// Steps to Solve the Problem:
// Store the 1st element(index 0) in a temporary variable.
// Start from the 2nd element (index 1) and move the elements back by one position.
// Update the value of the last element in the array, by the value of the 1st variable, 
// which was initially stored in the temporary variable.


// Time Complexity: O(n)
// Space Complexity: O(1)

void LeftRotateByOne(int arr[], int n){
    int temp = arr[0];

    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}


int main(){
    int n;
    // int arr[] = {1,2,3,4,5};
    int arr[] = {30,5,20};
    n = sizeof(arr)/ sizeof(arr[0]);


    LeftRotateByOne(arr, n);

    return 0;

}
