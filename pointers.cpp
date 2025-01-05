//  address are stored in Pointers
#include<iostream>
using namespace std;
int main(){
    int x = 5;
    cout<<&x<<endl; // & - shows the adress of stored interger 

    int *p =&x; // p is a pointer to the variable x that stores address of x
    cout<<p<<endl; 

    *p = 10; // To update the value using pointers

    cout<<*p<<endl; // To print the value of the address which is stored in p


    // Double pointer is used to secure address of a single pointer
    int *ptr = &x;
    int **p1 = &ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p1<<endl;  // &x,*ptr,**p1 These three represent the same thing

    // To Pass address of array to pointer then
    int arr[] = {1,2,3,4,5};
    int* abc=arr;
    cout<<abc; // printing address of 1st element of array which is address of array
    
    return 0;
}