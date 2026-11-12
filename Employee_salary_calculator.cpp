#include<iostream>
#include<string>
using namespace std;
int main(){
    int retired_employees_salary;
    int active_employees_salary;
    int age,hours;
    cout<<"Enter the age of the employee: "; cin>>age;
    if(age>=60 && age<70){
        retired_employees_salary=30000;
        cout<<"Retired employee salary: "<<retired_employees_salary;
    }
    else if (age >= 70){
        retired_employees_salary=40000;
        cout<<"Retired employee salary: "<<retired_employees_salary;
    }
    else{
        cout<<"Invalid age entered. Please enter a valid age.";
    }
    cout<<endl;
    cout << "Enter hours worked: ";
    cin >> hours;

    int basePay = 1000;
    int extraHours = 0;
    int overtimePay = 0;

    if (hours > 8) {
        extraHours = hours - 8;
        if (extraHours > 3)
            extraHours = 3;          // overtime capped at 3 hours
        overtimePay = extraHours * 300;
    }

    int grossSalary = basePay + overtimePay;
    int netPay = grossSalary;        // no deductions specified

    cout << "Hours worked: " << hours << endl;
    cout << "Base pay: " << basePay << " rupees" << endl;
    cout << "Overtime hours counted: " << extraHours << endl;
    cout << "Overtime pay: " << overtimePay << " rupees" << endl;
    cout << "Gross salary: " << grossSalary << " rupees" << endl;
    cout << "Net pay: " << netPay << " rupees" << endl;

    if (hours > 11)
        cout << "Note: only 3 extra hours are paid." << endl;


    return 0;
}