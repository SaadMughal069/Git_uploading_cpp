#include <iostream>
using namespace std;
int main()
{
    char a, b, c;
    int choice;
    cout << "Enter three characters: ";
    cin >> a >> b >> c;
    cout << "\n1. Sort in Ascending order";
    cout << "\n2. Sort in Descending order";
    cout << "\nEnter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        if (a > b)
        {
            a = a + b;
            b = a - b;
            a = a - b;
        }
        if (a > c)
        {
            a = a + c;
            c = a - c;
            a = a - c;}
        if (b > c)
        {b = b + c;
        c = b - c;
        b = b - c; }
        cout << "Ascending: " << a << " " << b << " " << c;
    }
    else if (choice == 2){
        if (a < b){
            a = a + b;
            b = a - b;
            a = a - b;
        }
        if (a < c){
            a = a + c;
            c = a - c;
            a = a - c;
        }
        if (b < c){
            b = b + c;
            c = b - c;
            b = b - c;
        }
        cout << "Descending: " << a << " " << b << " " << c;
    }
    else
        cout << "Invalid choice!";
    return 0;
}