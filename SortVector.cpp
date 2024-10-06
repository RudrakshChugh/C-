// to sort a vector only containg zero and one
#include<iostream>
#include<vector>
using namespace std;
void sortm1(vector<int>& v){
    int n= v.size();
    int noo=0; // no of one
    int noz=0; // no of zeroes
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;}

    //Filling Elemets
    for(int i=0;i<n;i++){
    if(i<noz) v[i]=0;
    else v[i]=1;
 }}

void sortm2(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==0) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}


int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    sortm2(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}