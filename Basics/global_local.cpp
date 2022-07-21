#include <iostream>
// #include<typeinfo>
#include<bits/stdc++.h>
using namespace std;
extern int x; //extern le bacha liya
int y=20;
int main(){
    int y=10;//local has precedence over global variable
    cout<<y<<"\n";
    cout<<x<<"\n";
    {
        y=30;
        cout<<y<<endl;
        auto f=12.4;
        cout<<typeid(f).name(); //d for double
    }
    return 0;
}
int x=5;
