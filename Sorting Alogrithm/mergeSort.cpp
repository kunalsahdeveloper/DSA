#include<iostream>
using namespace std;

// void merge(int arr[], int s, int mid, int e) {
//     int n1 = mid - s + 1;
//     int n2 = e - mid;

//     int left[n1], right[n2];

//     for(int i = 0; i < n1; i++)
//         left[i] = arr[s + i];
//     for(int j = 0; j < n2; j++)
//         right[j] = arr[mid + 1 + j];

//     int i = 0, j = 0, k = s;
//     while(i < n1 && j < n2) {
//         if(left[i] <= right[j]) {
//             arr[k] = left[i];
//             i++;
//         } else {
//             arr[k] = right[j];
//             j++;
//         }
//         k++;
//     }

//     while(i < n1) {
//         arr[k] = left[i];
//         i++;
//         k++;
//     }

//     while(j < n2) {
//         arr[k] = right[j];
//         j++;
//         k++;
//     }
// }


void merge(vector<int> &arr, int st, int mid, int end){

    vector<int> temp;
    int i = st, j = mid+1;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0; idx < temp.size(); idx++){
        arr[idx + st] = temp[idx];
    }
    
}





void mergeSort(vector<int> &arr, int s, int e) {
    if(s < e) {
        int mid = s + (e - s) / 2;

        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: \n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}