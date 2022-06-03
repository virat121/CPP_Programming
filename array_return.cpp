#include <iostream>
using namespace std;
int* fun(){
    static int arr[5]={1,2,3,4,5};
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
