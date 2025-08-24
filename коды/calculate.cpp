#include <iostream>
using namespace std;

int main(){
    double num1;
    double num2;
    char sign;
    cout << "input number one: ";
    cin >> num1;
    cout << endl;
    cout << "input number two: ";
    cin >> num2;
    cout << endl << "input sign: ";
    cin >> sign;
    cout << endl;

    switch(sign){
        case('+'):
            cout << "rezult: " << num1 + num2;
            break;
        case('-'):
            cout << "rezult: " << num1 - num2;
            break;
        case('*'):
            cout << "rezult: " << num1 * num1;
            break;
        case('/'):
            if (num1 == 0 || num2 == 0)
                cout << "error: (num / 0) STOP";
            else
                cout << "rezult: " << num1 / num2;
            break;
        default:
            cout << "error";
            break;
    }
}