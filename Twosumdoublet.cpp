#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter Target :";
    cin>> x;
    vector<int> v;
    int n;
    cout<<"Enter Array Size :";
    cin>>n;

    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0;i<=v.size()-2;i++){ // -2 beacuse we want loop to go until last 2nd element  // 1st loop for 1st eement
        for(int j=i+1;j<=v.size()-1;j++){ //-1 we want loop to  goo till last index  // 2nd loop for second element
        if(v[i]+v[j]==x){
            cout<<"("<<i<<","<<j<<")";
        }
    }
}
}