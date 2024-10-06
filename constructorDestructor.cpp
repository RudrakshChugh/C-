#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(){  // Default Constructor - No Arguments Passed
        length = 0;
        breadth = 0;
    }
    Rectangle(int x, int y){ // Parameterized Constructor - Arguments Passed
        length = x;
        breadth = y;
    }
    Rectangle(Rectangle& r){ // Copy Constructor -initialise a object by existing object
        length = r.length;
        breadth = r.breadth;
    }
    ~Rectangle(){ // Destructor
        cout<<"Destructor is Called"<<endl;
    }
};
int main(){
    Rectangle r1;
    cout<<r1.length<<" "<<r1.breadth<<endl;

    Rectangle r2(3,4);
    cout<<r2.length<<" "<<r2.breadth<<endl;

    Rectangle r3 = r2 ;// Value of r2 copy to r3
    cout<<r3.length<<" "<<r3.breadth<<endl;

    Rectangle* r4 = new Rectangle(); //Pointer object
    cout<<r4->length<<" "<<r4->breadth<<endl;
    delete r4; // To Delete A Variable in Pointer Form
    return 0;
}