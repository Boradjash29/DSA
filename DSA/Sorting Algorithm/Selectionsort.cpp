#include<iostream>
using namespace std;

void selectioonsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
       int temp=arr[min];
       arr[min]=arr[i];
         arr[i]=temp;
    }
}

int main(){
    int arr[]={5,4,10,1,6,2};
    int size =sizeof(arr)/sizeof(arr[0]);

    selectioonsort(arr,size);

     cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

