#include<iostream>
using namespace std;

void Bubblesort(int arr[],int size){

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

}

int main (){
    int arr[] = {15,16,6,8,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    Bubblesort(arr,size);
      
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}