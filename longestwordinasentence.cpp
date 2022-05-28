/* #include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
cin.ignore();
int len=0;
int ans=0;
char a[n+1];
cin.getline(a,n);
cin.ignore();
for(int i=0;i<n;i++){
    while(a[i]!=' '){
        len++;
        ans=max(ans,len);
    }
len=0;}
cout<<ans<<endl;
return 0;}
 */
#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
cin.ignore();
char arr[n+1];
cin.getline(arr,n);
cin.ignore();
int i=0;
//for while loop iteration
int maxlen=0, currlen=0;
while(1){
    if(arr[i]==' ' || arr[i]=='\0' ){
        if(currlen>maxlen){
            maxlen=currlen;
            }currlen=0;}
    else{currlen++;}
    
    
    if(arr[i]=='\0'){
        break;
    }
i++;}cout<<maxlen<<endl;
return 0;}