#include<iostream>
#include<string>
using namespace std;
int main() {
    int option;
    cout<<"Press 1 for current account:\nPress 2 for saving account:"<<endl;
    cin>>option;
    if (option==1){
        int balance=2000;
        char choice;
        cout<<"Your current account balance is: "<<balance<<endl;
        cout<<"Press a for depodit money:\nPress b for withdraw money:"<<endl;
        cin>>choice;
        if(choice=='a'){
            int deposit;
            cout<<"Enter the amount to deposit: ";
            cin>>deposit;
            balance+=deposit;
            cout<<"Your current account balance after deposit is: "<<balance<<endl;
        }
        else if(choice=='b'){
            int withdraw;
            cout<<"Enter the amount to withdraw: ";
            cin>>withdraw;
            if(withdraw>balance){
                cout<<"Insufficient balance"<<endl;
            }
            else{
                if(withdraw>10000){
                    cout<<"You can not withdraw more than 10000 from current account"<<endl;
                }
                else{
                    if(balance-withdraw>=500){
                        balance-=withdraw;
                        cout<<"Your current account balance after withdraw is: "<<balance<<endl;
                    }
                    else{
                        cout<<"Balance is less than 500";
                    }
                }
            }
        }
        else{
            cout<<"Invalid choice entered";
        }
    }
    else if (option==2){
        int balance=5000;
        cout<<"Your saving account balance is: "<<balance<<endl;
        char choice;
        cout<<"Press a for depodit money:\nPress b for withdraw money:";
        cin>>choice;
        if(choice=='a'){
            int deposit;
            cout<<"Enter the amount to deposit: ";
            cin>>deposit;
            balance+=deposit;
            cout<<"Your saving account balance after deposit is: "<<balance<<endl;
        }
        else if(choice=='b'){
            int withdraw;
            cout<<"Enter the amount to withdraw: ";
            cin>>withdraw;
            if(withdraw>balance){
                cout<<"Insufficient balance"<<endl;
            }
            else{
                if(withdraw>25000){
                    cout<<"You can not withdraw more than 25000 from saving account"<<endl;
                }
                else{
                    if(balance-withdraw>=500){
                        balance-=withdraw;
                        cout<<"Your saving account balance after withdraw is: "<<balance<<endl;
                    }
                    else{
                        cout<<"Balance is less than 500";
                    }
                }
            }
        }
        else{
            cout<<"Invalid choice entered";
        }
    }
    else{
        cout<<"Invalid option"<<endl;
    }
    return 0;
}