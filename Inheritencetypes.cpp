#include<iostream>
using namespace std;

class Parent1{
    public:
    Parent(){
        cout<<"Parent1 class"<<endl;
    }
};
class Parent2{
    public:
    Parent(){
        cout<<"Parent2 class"<<endl;
    }
};
 class Child : public Parent1, public Parent2 { //MUTLIPLE INHERITENCE
    public:
    Child(){
        cout<<"Child class"<<endl;
    }
};
class GrandChild: public Child{ // MULTI LEVEL INHERITENCE
    public:
    GrandChild(){
        cout<<"GrandChild class"<<endl;
    }
};

int main(){
    Child c;

    return 0;
} 

// HIERACHICAl - when 2 Class Get inheritence From Same Same Class
// HYBRID - Combination of More than 1 Inheritence Types