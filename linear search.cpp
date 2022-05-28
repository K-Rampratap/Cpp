#include<iostream>
using namespace std;



int linearsearch(int array[],int n,int key){
string c;
c="not there";
for(int i=0;i<n;i++){
    if(array[i]==key){
        
        return i;
    }
}
return -1;
}



int main(){
int n;
cin>>n;

int array[n];
for(int i=0;i<n;i++)
{cin>>array[i];}
cout<<"enter the number u want to search"<<endl;
int key;
cin>>key;
cout<<linearsearch(array,n,key);

 


return 0;}