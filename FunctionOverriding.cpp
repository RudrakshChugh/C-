#include<iostream>
using namespace std;

class Parent{
    public:
    virtual void print(){  // USe Virtual Keyword For Function Overriding 
        cout<<"Parent class"<<endl;  // Decided At Runtime Which Function To Use -- Runtime Polymorphism
    }
    void show(){
        cout<<"Parent class"<<endl;
    }    
    
};
class Child : public Parent{
    public:
    void print(){
        cout<<"Child class"<<endl;
    }
    void show(){
        cout<<"Child class"<<endl;
    }    
    
};
int main(){
    Parent *p;
    Child c;

    p = &c;
    p->print();
    p->show();
    return 0;
} 
