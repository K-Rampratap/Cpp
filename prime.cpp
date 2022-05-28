#include<iostream>
#include<math.h>
using namespace std;
int isprime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return 100;
        }
    }return 200;
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<isprime(n)<<endl;


}
