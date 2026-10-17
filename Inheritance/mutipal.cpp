#include<iostream>
using namespace std;


class Student{
public:
    string name;
    int roll;

    Student(){};

    Student(string name,int roll){
        this->roll = roll;
        this->name = name;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"RollNo: "<<roll<<endl;
    }
};

class Teacher{
public:
    double salary;
    string sub;

    Teacher(){};

    Teacher(string sub,double salary){
        this->sub = sub;
        this->salary = salary;
    }
};

class TA : public Student, public Teacher{
public:

    void getInfo(){
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<sub<<endl;
        cout<<salary<<endl;
    }

};

int main(){
    TA t1;
    t1.name = "Ritik";
    t1.salary = 150000;
    t1.roll = 14;
    t1.sub = "DSA";
    t1.getInfo();
}