#include <iostream>
using namespace std;

int main(){
    //integer literals with prefixes
    int a=20;//decimal
    int b=0x1A;//Hexadecimal
    int c=016;//Octal
    int d=0b11;//Binary
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    //integer literals with suffixes
    int x=124;
    unsigned int y=124u;
    long int z=124l;
    long long int w=124ll;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    cout<<w<<endl;
    //floating literals
    float f1=10.5f;//float
    double d1=10.515;//double
    float f2=2.1e15f;//2.1 * 10^12
    double d2=200.1e-80;//200.1 * 10^(-80)
    double d3=0x1A.1p2;//26.0625 * 2^2
    cout<<f1<<endl;
    cout<<d<<endl;
    cout<<f2<<endl;
    cout<<d2<<endl;
    cout<<d3<<endl;
    return 0;
}
