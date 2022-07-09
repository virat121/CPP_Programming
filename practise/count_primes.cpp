#include<iostream>
using namespace std;
bool isprime(int i){
    if(i<=1)
    return false;
    for(int j=2;j<i;j++)
    if(i%j==0){
        return false;
    }
return true;
}
int count_prime(int n){
    int i=2;
    int count=0;
    for(i=2;i<=n;i++){
        if(isprime(i)){
            count++;
        }
  }
  return count;
}
int main(){
    int n;
    cin>>n;
    cout<<count_prime(n);
    return 0;
}