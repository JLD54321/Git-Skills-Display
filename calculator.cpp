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
return 0;
}

/* function that adds 2 numbers */
int add (int num1, int num2)
{
    int sum = num1 + num2;

    return sum;
}