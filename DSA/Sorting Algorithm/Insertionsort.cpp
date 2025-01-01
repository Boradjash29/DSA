#include<iostream>
using namespace std;


void Insertionsort(int arr[], int size) {
    for (int i = 1; i <= size - 1; i++) {
        int temp = arr[i];
        int j; // Declare 'j' outside the loop
        for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j]; // Shift elements to the right
        }
        arr[j + 1] = temp; // Insert the temp at the correct position
    }
}

int main(){
    int arr[]={5,4,10,1,6,2};
    int size =sizeof(arr)/sizeof(arr[0]);

    Insertionsort(arr,size);

     cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}