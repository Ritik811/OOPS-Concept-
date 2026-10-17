#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){
        cout<<"Parent Constructor"<<endl;
    }

    Person(string name,int age){
        this->name = name;
        this->age = age;
    }

    ~Person(){
        cout<<"Parent destructor"<<endl;
    }
};

class Student : public Person{
public:
    int roll;

    Student(){
        cout<<"child constructor"<<endl;
    }

    Student(string name,int age,int roll) : Person(name,age){
        this->roll = roll;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"RollNo: "<<roll<<endl;
    }

    ~Student(){
        cout<<"Child destructor"<<endl;
    }
};

class GradStudent : public Student{
public:
    string resarchSub;

    GradStudent(string name,int age,int roll,string resarchSub) : Student(name,age,roll){
        this->resarchSub = resarchSub;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"RollNo: "<<roll<<endl;
        cout<<"resarch Sub"<< resarchSub<<endl;
    }

    ~GradStudent(){
        cout<<" Grand destructor";
    }
};

int main(){
    Student s1("Ritik",23,77);
    s1.getInfo();
    GradStudent g1("Sonia",23,78,"Engineering");
    g1.getInfo();
}