#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* p = &x;
    int* ptr = NULL; //  reserved address
    cout<<ptr; //0x0
    //  \0- Null Character
    return 0; 
}  