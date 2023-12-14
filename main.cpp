// ***************************************************
// Projekt:      Calculator   
// Author:       Ali Haydar
// Datum:        08.12.2022
// Programmname: Calculator
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{


	// Declare variables for operator, numbers, and result
    char op;
    float num1, num2, result;

	// Prompt user to enter operator and two numbers
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

	// Use a switch statement to perform the appropriate arithmetic operation
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':	// Addition
            result = num1 + num2;
            break;

        case '-':  // Subtraction
            result = num1 - num2;
            break;

        case '*':  // Multiplication
            result = num1 * num2;
            break;

        case '/':  // Division
            result = num1 / num2;
            break;

        default:  // Invalid operator
            cout << "Invalid operator!";
            return 0;
    }

	// Display the result of the calculation
    cout << num1 << " " << op << " " << num2 << " = " << result;

    return 0;


//getchar();
system("PAUSE");
return 0;
}
