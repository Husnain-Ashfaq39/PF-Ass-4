//Husnain Ashfaq (22i-2536)
#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

// Function prototype
void inputvalidate();

//function deifnation to validate the input....
void inputvalidate(int h, int m, int s)
{
    if (h >= 25)
    {
        cout << endl
             << "invalid input";
        void exit();
    }
    else if (m > 59)
    {
        cout << endl
             << "invalid input";
        void exit();
    }
    else if (s > 59)
    {
        cout << endl
             << "invalid input";
        void exit();
    }
}

int main()
{

    int h, m, s, count=1;
    cout << "Enter Current time(hours-minutes-seconds):" << endl;
    cin >> h >> m >> s;
    inputvalidate(h, m, s);
    system("CLS");
    cout << h << " Hours : " << m << " Minutes : " << s << " Seconds " << endl;
    
    for (; h <= 23; h++)
    {

        for (; m <= 59; m++)
        {

            for (; s <= 59; s++)
            {
                //sleep to give 1 second dalay
                Sleep(1000);
                 
                //cls to reset or clear the screen
                if(count==11)
                {system("CLS");
                cout << h << " Hours : " << m << " Minutes : " << s << " Seconds " << endl;
                count=1;}
                count++;
                
            }
            s = 0;
        }
        m = 0;
        if(h>=23)
        h=0;
    }
 
 return 0;
}
