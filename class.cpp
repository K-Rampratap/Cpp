#include <iostream>
#include <sstream>

using namespace std;

class Student{
    public:
    int age1,standard1;
    string first,last;
    void set_age(int age){
        age1=age;    }
    int get_age(){
    return age1;
    }
    
    
     
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    
    cout << st.get_age() << "\n";
    
    
    return 0;
}
