// A Class Inherites Properies Of another Class A-->B
// A-Parent Class / Super class    B-Child Class / Sub Class

#include<iostream>
using namespace std;

class Parent{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};
    class Child1: public Parent{ // Public Inherited Publically
    // x will remain public
    // y will remain protected
    // z will not be Accessbile
    };
    class Child2: private Parent{ // Public Inherited Privately
    // x will remain private
    // y will remain private
    // z will not be Inaccessbile
    };
    class Child3: protected Parent{ // Public Inherited Protectedly
    // x will remain protected
    // y will remain protected
    // z will not be Inaccessbile
    };
int main(){
    

    return 0;
}