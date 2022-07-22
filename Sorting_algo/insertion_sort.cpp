#include<iostream>
using namespace std;
int* insertion_sort(int arr[],int n){
     int i=0,j=0;
     for(i=1;i<n;i++){
        int key=arr[i];
        j=i-1;
        //double pointer approach
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key; 
     }
     return arr;
}
int main(){
    int arr[]={1,7,3,6,4,8,10,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
