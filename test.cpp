#include <iostream>
#include <cstdio>
using namespace std;

/* int main() {
    string array[9]={"one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    if(n>1 && n<9){
        cout<<array[n-1];
    }
    
    return 0;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    return 0;
    
    
}*/
/*int linearsearch(int array[],int n,int key){
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

 


return 0;}*/


int main() {
	// your code goes here
	int T,N,X,P;
	cin>>T; //number of testcases
	
	for(int i=0;i<T;i++){
	    cin>>N>>X>>P;
	    if((X*3-(N-X))>=P){cout<<"PASS"<<endl;
	}
	else{cout<<"FAIL"<<endl;}}
	return 0;
}
