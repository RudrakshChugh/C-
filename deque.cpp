#include<iostream>
#include<deque>
//deque -- Doubly Ended Queue
// To Remove and add Elements from starting as well as ending

using namespace std;
int main(){
    deque<int> d;
    d.push_back(10);
    d.push_front(20);
    d.push_back(30);

    for(int i:d){ // range based loop it iteates over each element in loop
        cout<<i<<" ";
    }
    d.pop_back(); // Remove 1 element from last
    d.pop_front(); // Remove 1 element from first
    for(int i:d){
        cout<<endl<<i<<" "<<endl;
    }

    //d.front() - used for first element
    //d.back() - used for last element
    cout<<"Empty or not"<<d.empty()<<endl;
    // 0 for no , 1 for yes
    
}