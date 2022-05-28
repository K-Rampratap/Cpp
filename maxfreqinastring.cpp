#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1="abbbbbcaacbade";
    sort(s1.begin(),s1.end());
    int freq=1;
    int maxf=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s1[i+1]){
            freq++;
            maxf=max(maxf,freq);
        }
        else{freq=1;}
    }cout<<maxf<<endl;
return 0;}