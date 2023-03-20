// Husnain AShfaq (22i-2536)
#include <iostream>
using namespace std;

// function to validate the user input
int inputvalidate(int a, int b, int n)
{
    if (a <= 0 || b <= 0 )
    {
        return 1;
    }
    return 0;
}

// Function to perform addition
void addition(int a, int b)
{
    int n;
    n = a;
    for (int i = 1; i <= b; i++)
        n++;
    cout << a << "+" << b << "=" << n;
}
// Function to perform subtraction
void subtraction(int a, int b)
{
    int n;
    n = a;
    for (int i = 1; i <= b; i++)
        n--;
    cout << a << "-" << b << "=" << n;
}
// Function to perform multiplication
void multiplication(int a, int b)
{
    int n;
    n = 1;
    for (int i = 1; i <= b; i++)

    {
        for (int i = 1; i <= a; i++)
        {
            n++;
        }
    }
    n--;
    cout << a << "*" << b << "=" << n;
}

// Function to perform division
void division(int a, int b)
{
    int i = 0, x = a;
    if (a < b)
        cout << x << "/" << b << "=" << 0;
    while (a >= b)
    {

        for (int j = 1; j <= b; j++)
        {
            a--;
        }
        i++;
    }
    cout << x << "/" << b << "=" << i;
}
void remainder(int a, int b)
{
    int i = 0, x = a;
    while (a >= b)
    {
        for (int j = 1; j <= b; j++)
        {
            a--;
        }
        i++;
    }
    cout << x << "%" << b << "=" << a;
}

int main()
{
    int a, b, n, i;
    cout << "Enter the first value:";
    cin >> a;
    cout << "Enter the second value:";
    cin >> b;

    cout << "Select operaion that you want to perform(1-5)\n1-Addition:\n2-Subtraction:\n3-Mutiplication:\n4-Division:\n5-remainder:\n";
    cin >> n;
    i = inputvalidate(a, b, n);
    if (i == 1)
    {
        cout << "Invalid input";
        return 0;
    }
    switch (n)
    {
    case 1:
        addition(a, b);
        break;
    case 2:
        subtraction(a, b);
        break;
    case 3:
        multiplication(a, b);
        break;
    case 4:
        division(a, b);
        break;
    case 5:
        remainder(a, b);
        break;
    default:
        cout << "invalid input!";
        break;
    }

    return 0;
}