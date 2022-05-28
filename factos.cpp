#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int facto=1;
    for(int i=1;i<=n;i++){
        facto=facto*i;
    }cout<<facto<<endl;
    cin>>n;
    return 0;
}