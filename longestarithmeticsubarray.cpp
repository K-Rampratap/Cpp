#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int curr=2;
    int ans=INT_MIN;
    int pd=a[1]-a[0];
    for(int i=0;i<n;i++){
        cin>>a[i];}
    for(int i=2;i<n;i++){
        if(pd==a[i]-a[i-1]){
            curr++ ;}
        else{
            pd=a[i]-a[i-1];
            curr=2;
        }
        ans=max(ans,curr);}
    cout<<ans<<endl;
    return 0;
}

/* dope */

    