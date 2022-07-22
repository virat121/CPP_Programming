#include <iostream>
using namespace std;

int main(){
    //Implicit type conversion
    float f=20.56;
    int i=f; 
    cout<<i<<endl;
    int x=10;
    char ch='A';
    cout<<x+ch<<endl;
    cout<<x+f<<endl;
    //Explicit type conversion
    int a=15,b=2;
    char ch1='A';
    double d=double(a)/b; //C-style conversion
    double z=static_cast<double>(ch1)/b;//c++ style explicit type conversion
    cout<<d<<endl;
    cout<<z<<endl;
    return 0;
}
