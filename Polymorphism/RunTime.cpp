#include<iostream>
using namespace std;

// Function overriding
class Parent{
public:
    void getInfo(){
        cout<<"Parent Class"<<endl;
    }

    virtual void hello(){
        cout<<"Hello i am Parent"<<endl;
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout<<"Child Class"<<endl;
    }

    void hello(){
        cout<<"Hello I am Child"<<endl;
    }
};

int main(){
    Child c1;
    c1.getInfo();
    c1.hello();
    Parent p1;
    p1.getInfo();
    p1.hello();
}