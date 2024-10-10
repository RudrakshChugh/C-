// Binding of Variables and Methods Togeather into A Single Unit -> Class is Called Encapsunation
// Data is only accebile By Class Methods

#include<iostream>
using namespace std;

 class ABC{
    int x;
    public:

    void Set(int n){
        x = n;
    }
    int get(){
        return x;
    }
 };
int main(){
    ABC obj1;
    obj1.Set(10); //  To acess x we Need To Use The Functions Of Same Class
    cout<<obj1.get()<<endl;

    return 0;
}


// ABSTRACTION --- Enables Us To Dispaly Only Essential Information while Hiding Implementation Details