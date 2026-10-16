#include <iostream>
using namespace std;

class Teacher {
private:
    double salary; // hide the data

public:
    string name;
    string dept;
    string sub;

    // default constructor 
    Teacher(){
        cout<<"Default constructor called"<<endl;
    }

    // Parameter Constructor
    Teacher(string name,string dept,string sub){
        this->name = name;
        this->dept = dept;
        this->sub = sub;
    }

    // Custom copy constructor
    Teacher(Teacher &obj){
        this->name = obj.name;
        this->sub = obj.sub;
        this->dept = obj.dept;
    }

    void getInfo(){
        cout<<name<<" "<<sub<<" "<<dept<<endl;
    }

};

int main(){
    Teacher t1("Ritik","CSE","C++");
    t1.getInfo();
    Teacher t2(t1); // copy constructor 
    t2.name = "Amit";
    t2.getInfo();
}