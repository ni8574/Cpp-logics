#include <iostream>
using namespace std;
class Student{
    int age;
    int m1,m2,m3,m4,m5;
    public:
    void get_age(int x){
        age = x;

    }
    void show_age(){
        cout << age;
    }
};
int main(){
    Student s1;
    s1.get_age(20);

    s1.show_age();
    return 0;
}