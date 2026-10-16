#include <iostream>
using namespace std;

class Student{
public:
    string name;
    double* marksPtr;

    Student(string name,double marks){
        this->name = name;
        marksPtr = new double;
        *marksPtr = marks;
    }

    Student(Student &obj){
        this->name = obj.name;
        marksPtr = new double;
        *marksPtr = *obj.marksPtr;
    }

    void getInfo(){
        cout<<name<<" "<<*marksPtr<<" "<<endl;
    }
};

int main(){
    Student s1("Ritik",9.9);
    s1.getInfo();
    Student s2(s1);
    s2.name = "Sonia";
    *(s2.marksPtr) = 8.2;
    s2.getInfo();
    s1.getInfo();
}