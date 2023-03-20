// Husnain Ashfaq(22i-2536)
#include <iostream>
using namespace std;

// function to find the maximum value in the Array
int mx(int n1, int n2, int n3, int n4, int n5)
{
    int max = n1;
    if (n2 > max)
        max = n2;
    if (n3 > max)
        max = n3;
    if (n4 > max)
        max = n4;
    if (n5 > max)
        max = n5;

    return max;
}

int main()

{
    int max = 0, n1, n2, n3, n4, n5;

    cout << "Enter values 5 values one by one:";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << endl
         << endl;

    // function call to find the maximum value in the array
    max = mx(n1, n2, n3, n4, n5);

    for (int b = max; b >= 1; b--)
    {
        if (b >= 10)
            cout << b;
        else
            cout << " " << b;

        for (int j = 0; j < 5; j++)
        {

            if (j == 0)
            {
                if (n1 >= b)
                    cout << " |";
                else
                    cout << "  ";
            }
            else if (j == 1)
            {
                if (n2 >= b)
                    cout << " |";
                else
                    cout << "  ";
            }
            else if (j == 2)
            {
                if (n3 >= b)
                    cout << " |";
                else
                    cout << "  ";
            }
            else if (j == 3)
            {
                if (n4 >= b)
                    cout << " |";
                else
                    cout << "  ";
            }
            else if (j == 4)
            {
                if (n5 >= b)
                    cout << " |";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "   1 "
         << "2 "
         << "3 "
         << "4 "
         << "5 ";
}