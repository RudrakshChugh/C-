// Used To Acess Private Members Of The Class
#include<iostream>
using namespace std;

class A{
    int x;
    public:
    A(int y){
        x = y;
    }
    friend void Print(A &obj);
};
void Print(A &obj){ // Here obj is A Variable of A
    cout<<obj.x<<endl;
}
int main(){
    
    A obj(10);
    Print(obj);
    return 0;
}