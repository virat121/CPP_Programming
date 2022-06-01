#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cin>>a>>b;
    // temp=a;
    // a=b;
    // b=temp;
    // a+=b;
    // b=a-b;
    // a=a-b;
    a^=b;
    b=a^b;
    a^=b;
    cout<<a<<" "<<b;
    return 0;
}