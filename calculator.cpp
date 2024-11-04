#include <iostream>
#include <cstdlib>
#include <string.h>
#include "calculator.h"

using namespace std;

int main (int argc, char* argv[])
{

    if (strcmp(argv[1], "add") == 0)
    {
        int sum = add(stoi(argv[2]), stoi(argv[3]));
        cout << "The sum of " << argv[2] << " and " << argv[3] << " is " << sum << endl;
    }
    else if (strcmp(argv[1], "subtract") == 0)
    {
        int difference = subtract(stoi(argv[2]), stoi(argv[3]));
        cout << "The difference of " << argv[2] << " and " << argv[3] << " is " << difference << endl;
    }
    else if (strcmp(argv[1], "divide") == 0)
    {
        int quotient = divide(stoi(argv[2]), stoi(argv[3]));
        cout << "The quotient of " << argv[2] << " and " << argv[3] << " is " << quotient << endl;
    }
    else if (strcmp(argv[1], "multiply") == 0)
    {
        int product = multiply(stoi(argv[2]), stoi(argv[3]));
        cout << "The product of " << argv[2] << " and " << argv[3] << " is " << product << endl;
    }
    else
    {
        cout << "Invalid operation. Valid operations include: add, subtract, divide, multiply." << endl;
    }
    return 0;
}

/* function that adds 2 numbers */
int add (int num1, int num2)
{
    int sum = num1 + num2;

    return sum;
}

/* function that subtracts 2 numbers */
int subtract (int num1, int num2)
{
    int difference = num1 - num2;

    return difference;
}

/* function that divides 2 numbers */
int divide (int num1, int num2)
{
    int quotient = num1 / num2;

    return quotient;
}

/* function that multiplies 2 numbers */
int multiply (int num1, int num2)
{
    int product = num1 * num2;

    return product;
}