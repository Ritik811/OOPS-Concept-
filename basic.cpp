#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    double salary;
public:
    string name;
    string dept;
    string sub;

    // methods
    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double salary){
        this->salary = salary;
    }

    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "Ritik";
    t1.dept = "CSE";
    t1.setSalary(25000);
    t1.sub = "C++";
    cout<<t1.name<<" "<<t1.dept<<" "<<t1.getSalary()<<" "<<t1.sub<<endl;
}