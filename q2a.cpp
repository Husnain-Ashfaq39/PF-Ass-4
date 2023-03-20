//Husnain Ashfaq (22i-2536)
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of diameter:";
    cin>>n;
    int r=2;
    for(;r<=(n+1)/2;r++){
        for (int space = 1; space <= n-r; space++)
        {
            cout<<".";
        }
        for (int c = 1; c <= 2*r-1; c++)
        {
            cout<<"*";
        }
        for (int space = 1; space <= n-r; space++)
        {
            cout<<".";
        }
        
        cout<<endl;
    }
    
    for(int j=(n+1)/2;j>=2;j--){
        for (int space = 1; space <= n-j; space++)
        {
            cout<<".";
        }
        for (int c = 1; c <= 2*j-1; c++)
        {
            cout<<"*";
        }
        for (int space = 1; space <= n-j; space++)
        {
            cout<<".";
        }
        
        cout<<endl;
        break;
    }

    for(int j=(n+1)/2;j>=2;j--){
        for (int space = 1; space <= n-j; space++)
        {
            cout<<".";
        }
        for (int c = 1; c <= 2*j-1; c++)
        {
            cout<<"*";
        }
        for (int space = 1; space <= n-j; space++)
        {
            cout<<".";
        }
        
        cout<<endl;
    }
return 0;
}
