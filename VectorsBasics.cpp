#include<iostream>
#include<Vector>
using namespace std;
int main(){
    vector<int> v; // you need not ot mention size of vector
    // Inserting /Input do not use []
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    // on usig pushback if vector is full then its capacity doubles if not then capacity reamisn same
    cout<<v.capacity()<<endl; // To print the capacity of the vector 
    cout<<v.size()<<endl; // to print the size of the array 

    //if you want to update / access
    v[0] = 88;
    v.at(2) = 89; // Update at Index 2
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;

    // to remove last element of the vector
    v.pop_back(); // here 1 removed
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
} 
// Vectors are passed to function by value . Each time you pass a new vector is created which is similar    
// To pass a vector to the function use like this    display(vector<int>& a)