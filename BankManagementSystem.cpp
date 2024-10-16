#include<iostream>
using namespace std;
    void Admin(){
        string Username;
        char a;
        int pass;
        int accountno;
        string name;
        int balance;
        string address;

        cout<<"-----Welcome to Admin-----\n"<<endl;
        cout<<"Enter Your Username\n"<<endl;
        cin>> Username;
        cout<<"Enter Your Password\n"<<endl;
        cin>> pass;
        if(Username=="a" && pass==1){
        cout<<"****MAIN MENU****\n"<<endl;
        cout<<"1. Add Account\n2. Delete a Account\n3. Check All Acoounts\n4. Edit Account\n5. BAck To Main Menu\n6. Exit"<<endl;

        }
    }
int main(){
    cout<<"--------------------------\n| Bank Management System |\n--------------------------";
    int choice;
    cout<<"\n\nPress 1 for Admin\nPress 2 for Staff\nPress 3 for Customer\nPress 4 to Exit";
    cout<<"\n\nEnter your choice:";
    cin>>choice;
    switch(choice){
    case 1:Admin();
    // case 2:Staff();
    // case 3:Customer();
    // case 4:Exit();
    }
    return 0;
}  