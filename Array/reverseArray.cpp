#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int low = 0;
    int high = n-1;
    int temp;

    while(high > low){

        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        
        low++;
        high--;

    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


}

int main(){

    int arr[] = { 20, 23, 23, 45, 78, 88 };
	
    reverse(arr, 6);
    

    return 0;
}