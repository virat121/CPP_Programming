#include <iostream>
using namespace std;
int* fun(int arr[]){
    
     for(int i=0;i<5;++i){
         arr[i]=i+1;
     }
    return arr;
}
int main(){
    int* p,arr[100];
    p=fun(arr);
    for(int i=0;i<5;i++){
        cout<<*(p+i)<<"\n";
    }
    return 0;
}
