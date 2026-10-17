#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){};

    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
public:
    int roll;

    Student(){};

    Student(int roll){
        this->roll = roll;
        this->name = name;
    }

    void getInfo(){
        cout<<endl<<"Student details"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll"<<roll<<endl;
    }
};

class Teacher : public Person{
public:
    double salary;
    string sub;

    Teacher(){};

    Teacher(string sub,double salary){
        this->sub = sub;
        this->salary = salary;
    }
    void getInfo(){
        cout<<endl<<"Teacher details"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"Salary"<<salary<<endl;
        cout<<"sub"<<sub<<endl;
    }
};


int main(){
    Student s1;
    s1.name = "Ritik";
    s1.age = 24;
    s1.roll = 66;
    s1.getInfo();

    Teacher t1;
    t1.name = "Sonia";
    t1.age = 24;
    t1.salary = 30000;
    t1.sub = "Hindi";
    t1.getInfo();
}