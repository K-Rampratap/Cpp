#include<iostream>
using namespace std;
void increment(int *a){
    (*a)++;
}
int main(){
    int a=2;
    increment(&a);
    cout<<a<<endl;
    return 0;
    int* aptr;
    aptr = &a;
    cout<<aptr<<endl;
}
//this code prints 2 because in a function the variable actually doesnt partiicipate a new variable is created which is bound the function.