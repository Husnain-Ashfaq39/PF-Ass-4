#include <iostream>
using namespace std;

// Function to validate the correct input...
void inputvalidate(int n)
{
    if (n < 1)
        cout << "invalid input!";
}

// Function to print the pattern
void pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for(int k=n-i;k>=1;k--)
        {
            if(k%2==0)
            cout<<"_";
            else if(k%2==1)
            cout<<".";
        }
        cout<<endl;
        
    }
    
    for (int i = n-1; i >=1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for(int k=n-i;k>=1;k--)
        {
            if(k%2==0)
            cout<<"_";
            else if(k%2==1)
            cout<<".";
        }
        cout<<endl;
        
    }
}

int main()
{
    int n;
    cout << "Enter the number of lines until the centerline:";
    cin >> n;
    inputvalidate(n);
    pattern(n);
    return 0;
}