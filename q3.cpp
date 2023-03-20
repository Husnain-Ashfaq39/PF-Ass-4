// Husnain_Ashfaq (22i-2536)
#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;
int main()
{
    int ns1 = 0, h1 = 0, w1 = 0;
    int ch = 42, c = 1;
    cout << "Enter the Number of Steps:";
    cin >> ns1;
    cout << "Enter the Height of each step:";
    cin >> h1;
    cout << "Enter the width of each step:";
    cin >> w1;
    w1++;
    int ns, h, w, n = 1, s = 0;

    for (;;)
    {
        n = 1;
        s = 0;
        ns = ns1;
        h = h1;
        w = w1;

        for (int i = 1; i <= h + 1; i++)
        {

            if (i == 1)
            {
                cout << setw(ns * w);

                for (int j = 1; j <= w; j++)

                {

                    cout << (char)ch;
                }
            }
            if (i > 1)
            {
                cout << setw(ns * w) << (char)ch << setw(w - 1) << (char)ch;
            }
            cout << endl;
        }

        s = s + 5;
        // 2nd step from up

        for (int i = 1; i <= h + 1; i++)
        {

            if (i == 1)
            {
                cout << setw(ns * w - n * 5);
                ch++;
                for (int j = 1; j <= w; j++)

                {
                    if (1 == w - j + 1)
                        cout << setw(n * w);
                    cout << (char)ch;
                }
            }
            if (i > 1)
            {
                cout << setw(ns * w - 5) << (char)ch << setw(w - 1 + s) << (char)ch;
            }
            cout << endl;
        }

        for (int i = 4; i <= ns; i++)
        {
            n++;
            s = s + 5;
            // nth step from up
            for (int i = 1; i <= h + 1; i++)
            {

                if (i == 1)
                {

                    cout << setw(ns * w - n * 5);
                    ch++;
                    for (int j = 1; j <= w; j++)

                    {
                        if (1 == w - j + 1)
                            cout << setw(n * (w - 1) + 1);
                        cout << (char)ch;
                    }
                }
                if (i > 1)
                {
                    cout << setw(ns * w - n * 5) << (char)ch << setw(w - 1 + s) << (char)ch;
                }

                cout << endl;
            }
        }

        for (int i = 1; i <= ns * w + 5; i++)
        {

            cout << "*";
        }
        Sleep(1000);
        system("cls");
    }
    return 0;
}
