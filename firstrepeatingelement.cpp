#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>a[i];}
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                flag=1;
                cout<<i<<endl;
                
            }
            if(flag==1){
                break;
            }
        }
    }
return 0;}