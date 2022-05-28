#include<iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;

    }
};
void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
employee Uday;
   Uday.setdata(1,2,4);
   Uday.d=5;
   Uday.e=6;
   Uday.getdata();
return 0;
}