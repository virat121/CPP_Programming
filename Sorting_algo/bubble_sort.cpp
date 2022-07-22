#include <iostream>
using namespace std;
/*
int* bubble_sort(int arr[],int n){
    int i=0,j=0;
    for(int i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
        // for(int i=0;i<n;i++)
        // cout<<arr[i]<<" ";
        // cout<<endl;
    }
    return arr;
}
*/
// Optimised Bubble Sort
int* bubble_sort(int arr[],int n)
{
    int i = 0;
    for (i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false)
        break;
        for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
         cout<<endl;
    }
    return arr;
}
int main()
{
    int arr[] = {7, 3, 5, 2, 9, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
