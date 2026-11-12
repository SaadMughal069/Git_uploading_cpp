#include <iostream>
using namespace std;
int main(){
    int list[]={72,45,88,91,38,65,79,54};
    cout<<"The marks in the list are:"<<endl;
    for(int i=0;i<8;i++){
        cout<<"student "<<i+1<<": "<<list[i]<<endl;
    }
    int sum = 0;
    for(int i=0;i<8;i++){
        sum += list[i];
    }
    int average = sum/8;
    cout<<"The sum of all marks is: "<<sum<<endl;
    cout<<"Average of all marks is "<<average<<endl;
    int highest=list[0];
    int lowest=list[0];
    for(int i=0;i<8;i++){
        if(list[i]>highest){
            highest=list[i];
        }
        if(list[i]<lowest){
            lowest=list[i];
        }
    }
    cout<<"Highest: "<<highest<<endl;
    cout<<"Lowest: "<<lowest<<endl;
    int above=0,failed=0;
    for(int i=0;i<8;i++){
        if(list[i]>average){
            above++;
        }
        else{
            failed++;
        }
    }
    cout<<"Above average : "<<above<<endl;
    cout<<"Failed : "<<failed<<endl;
    for(int i=0;i<8;i++){
        if(list[i]>average){
            if(list[i]>highest)
                cout<<"Student "<<i+1<<" has the highest marks above average: "<<list[i]<<endl;
            }    
        }
        
}