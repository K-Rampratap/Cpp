#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int maxx=-1;
int rbd = 0;
for(int i=0;i<n;i++){
    cin>>a[i];}
for(int i=0;i<n;i++){
    
    if(a[i]>maxx && a[i]>a[i+1]){
        rbd++;
    }
    maxx=max(maxx,a[i]);
}
cout<<rbd<<endl;

return 0;
}
/* google kickstart */
