//ARRAY - collection of similar data types
// Arrays has continuous memory allocation
// Address of 1st byte of array is the address of whole array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size Of Array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter The Element You Want To Search";
    cin>>x;
    bool flag= false; // false means not present
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            flag = true;
        }
    }
    if(flag==true){
        cout<<"Element Found"<<endl;
    }else{
        cout<<"Element not found";
    }

return 0;
}