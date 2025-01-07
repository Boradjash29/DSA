#include<iostream>
using namespace std;

void merge(int arr[],int left ,int mid ,int right){
    int temp[right - left + 1];
    int low=left;
    int high=mid+1;
    int k = 0;
    while(low<=mid&&high<=right){
        if(arr[low]<=arr[high]){
            temp[k]=arr[low];
            low++;
           
        }
        else{
            temp[k]=arr[high];
            high++;
            
        }
        k++;
    }

    
         while (low <= mid) {
        temp[k] = arr[low];
        low++;
        k++;
    }
    
   
        while (high <= right) {
        temp[k] = arr[high];
        high++;
        k++;
    }
    
    
      for (int i = 0; i < k; i++) {
        arr[left + i] = temp[i];
    }
}
void mergesort(int arr[],int left,int right){
   if(left<right){
      int mid =(left+right)/2;
      mergesort(arr,left,mid);
      mergesort(arr,mid+1,right);
      merge(arr,left,mid,right);
   }
}
int main(){
    int arr[]={5,4,10,1,6,2};
    int size =sizeof(arr)/sizeof(arr[0]);

    mergesort(arr,0,size-1);

     cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

