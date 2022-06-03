#include <iostream>
using namespace std;
int* fun(){
    int* arr=new int[100];
     for(int i=0;i<5;++i){
         arr[i]=i+1;
     }
    return arr;
}
int main(){
    int* p;
    p=fun();
    for(int i=0;i<5;i++){
        cout<<*(p+i)<<"\n";
    }
    return 0;
}
