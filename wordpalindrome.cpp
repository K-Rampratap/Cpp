#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
char a[n+1];
for(int i=0;i<n;i++){
    cin>>a[i];}
bool check = 1;
for(int i=0;i<n;i++){
    
    if(a[i]!=a[n-i-1]){
        check=0;
        break;
    }
}
if(check==0){
    cout<<"not a plaindrome"<<endl;
}
else{
    cout<<"palindrome"<<endl;
}
return 0;} 