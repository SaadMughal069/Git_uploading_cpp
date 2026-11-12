#include<iostream>
#include<string>
using namespace std;
int main (){
    double num;
    double square;
    cout << "Enter your number to be squared: ";
    cin>>num;
    if (num >10 && num < 100){
      square = num*num;
      cout<<"The square of "<<num<<" is "<<square<<endl;
    }
    else{
        cout<<"Error";
    }
}