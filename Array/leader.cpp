#include<iostream>
using namespace std;

// An element is a leader if it is greater than all the elements to
// its right side. And the rightmost element is always a leader. 

//naive solution

void leader(int arr[], int n){

    for(int i = 0; i < n; i++){
 
        bool flag = false;
        for(int j = i + 1; j < n; j++){
            if(arr[i] <= arr[j]){                    
                flag = true;
                break;
            }
        }

        if(flag == false){
            cout<<arr[i]<<" ";
        }
	}

}


// void leader(int arr[], int n){

//     int mx= arr[n-1];
//     cout<<mx<<" ";
//     for(int i=n-1; i>=0; i--){
//         if(arr[i] > mx){
//             cout<<arr[i]<<" ";
//             mx = arr[i];
//         }
//     }

// }

int main(){

    // int arr[] = {16, 17, 4, 3, 5, 2};
    // int arr[] = {16, 15, 5, 2};
    int arr[] = { 2, 5,9,57,86};


    int n = sizeof(arr)/sizeof(arr[0]);
     
     leader(arr, n);

    return 0;
}

