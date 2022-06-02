#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
      goto Even;
    }
    else{
        goto Odd;
    }
     Even: 
    cout<<"Even Number";
    exit(0);
    cout<<"Hii";
    Odd: cout<<"Odd Number";
    return 0;
}
