#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n){


    if(n==0 || n==1)
        return true;


    for(int i=1; i<n; i++){

        if(arr[i-1] < arr[i]){
            return false;
        }
    }

    return true;

}

int main(){

    // int arr[] = { 20, 23, 23, 45, 78, 88 };
	// int n = sizeof(arr) / sizeof(arr[0]);

    int arr[] = { 20, 20, 20, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);

    if (checkSorted(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";

    return 0;
}