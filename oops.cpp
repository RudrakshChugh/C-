#include<iostream>
using namespace std;

class Fruit{
    public:
    string name;
    string color;
};
int main(){
    Fruit Apple; //Object
    Apple.name = "Apple";
    Apple.color = "Red";
    cout<<Apple.name<<"-"<<Apple.color<<endl;


    Fruit *mango = new Fruit();  //Object Pointer
    mango->name = "Mango";  //Use Arrow Operator
    mango->color = "Yellow";
    cout<<mango->name<<"-"<<mango->color<<endl; 
    return 0;
}