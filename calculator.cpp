#include<iostream>
using namespace std;
 
int main()
{
    double num1, num2;
    char op;
    cout<< "Enter the first number"<<endl;
    cin >> num1;
    cout << "Enter the second number"<<endl;
    cin >> num2;

    cout << "Enter the operator do you want"<< endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout<< "The addition of the number is "<< num1+num2 << endl;
        break;
    case '-':
        cout<< "The addition of the number is "<< num1-num2 << endl;
        break;
    case '*':
        cout<< "The addition of the number is "<< num1*num2 << endl;
        break;
    case '/':
        cout<< "The addition of the number is "<< num1/num2 << endl;
        break;
    
    default:
        cout << "OOPS! YOUR ENTERED OPERATOR IS INCORRECT"<<endl;
        cout << "PLEASE ENTER THE CORRECT OPERATOR"<< endl;
        break;
    }
    return 0;
}