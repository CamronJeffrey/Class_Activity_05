// Class_Activity_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    char char1;
    cout << "Hello, this is a program that acts as a calculator.";
    cout << "So please intput your numbers and math operation sign. \n";
    cout << "Number 1: ";
    cin >> num1;
    cout << endl << "number 2: ";
    cin >> num2;
    cout << endl << "Math operation: ";
    cin >> char1;

    switch (char1) {
    case '+':
        result = num1 + num2;
        cout << num1 << " " << char1 << " " << num2 << " = " << result;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " " << char1 << " " << num2 << " = " << result;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " " << char1 << " " << num2 << " = " << result;
        break;
    case '/':
        result = num1 / num2;
        cout << num1 << " " << char1 << " " << num2 << " = " << result;
        break;
    }
}
