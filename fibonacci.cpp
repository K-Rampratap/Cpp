#include<iostream>
using namespace std;
int main(){
    int t1=0;
    int t2=1;
    int n;
    cin>>n;
        cout<<"0"<<endl;
    
    for(int i=1;i<=n;i++){
        int t=t1+t2;
        t1=t2;
        t2=t; 
        cout<<t<<endl;
    }
return 0;
}