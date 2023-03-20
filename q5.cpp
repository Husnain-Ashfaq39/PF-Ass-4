// Husnain Ashfaq (22i-2536)
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, n, rows, max;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl
         << "__________________________" << endl
         << endl;
    max = pow(-x, n) - pow(-x, n - 1);
    // loop to check the max value
    for (int i = -x; i <= x; i++)
    {
        rows = pow(i, n) - pow(i, n - 1);
        if (rows > max)
        {
            max = rows;
        }
    }
    // Logic for drawing graph
    for (int j = max; j >= 0; j--)
    {
        if (j < 10)
            cout << "0" << j << "  | ";
        else
            cout << j << "  | ";
        for (int k = -x; k <= x; k++)
        {
            rows = pow(k, n) - pow(k, n - 1);

            if (rows == j)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << "     ";
    for (int a = -x; a <= x; a++)
    {
        cout << "___";
    }
    cout << endl
         << "     ";
    // To print the range below the graph
    for (int r = -x; r <= x; r++)
    {
        cout << r;
    }

    return 0;
}
