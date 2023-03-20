#include <iostream>
using namespace std;
int main()
{
    int r, count = 0;
    cout << "Enter the range of all sides:";
    cin >> r;
    cout << "__________________________" << endl;
    cout << "Side-a\tSide-b\thypotenuse\n";

    // Nested loop to determine the pythagoras triplets
    for (int i = 1; i <= r; i++)
    {

        for (int j = i; j <= r; j++)
        {

            for (int k = j; k <= r; k++)
            {
                if ((i * i) + (j * j) == (k * k))
                {
                    cout << i << "           " << j << "        " << k << endl;
                    cout << j << "           " << i << "        " << k << endl;
                    count = count + 2;
                }
            }
        }
    }
    cout << "A total of " << count << " pythagorian triplet were found in the range of " << r << endl;
    ;

    return 0;
}