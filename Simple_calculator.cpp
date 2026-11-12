#include<iostream>
#include<string>
using namespace std;
int main(){
    int n1,n2;
    char key;
cout<<"Enter two numbers:";
    cin>>n1>>n2;
    cout<<"Enter an ariyhmatic operator:";
    cin>>key;
    switch(key){
        case '+':
            cout<<"Addition of two numbers is: "<<n1+n2<<endl;
            break;
        case '-':
            cout<<"Subtraction of two numbers is: "<<n1-n2<<endl;
            break;
        case '*':
            cout<<"Multiplication of two numbers is: "<<n1*n2<<endl;
            break;
        case '/':
            if(n2==0){
                cout<<"Division by zero is not allowed"<<endl;
            }
            else{
                cout<<"Division of two numbers is: "<<n1/n2<<endl;
                break;
            }    
        default:
            cout<<"Invalid operator entered"<<endl;
            break;    
    }
}