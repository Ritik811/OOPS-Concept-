#include<iostream>
using namespace std;


class Print{
public:
    Print(){
        cout<<"I am default constructor"<<endl;
    }
    // function overloading
    void show(int x){
        cout<<x<<endl;
    }

    void show(char ch){
        cout<<ch<<endl;
    }
};

int main(){
    Print p1;
    p1.show(10);
    p1.show('R');
}