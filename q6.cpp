//Husnain Ashfaq (22i-2536)
#include <iostream>

using namespace std;

int main()
{

    cout<<"Enter first value: ";
    char st[1000];
    
    // take the first value from user
    cin>>st;
    // print the first value
    cout<<st<<" ";
    
    // run the loop to produce next 7 numbers
    for(int i=1;i<=7;i++)
    {
        // take temperary character array to store new value
        char temp[1000];
        // take index to count the size of temp
        int index=0,j;
        // assign first digit in prev
        char prev=st[0];
        // make count to 1
        int count = 1;

        // visit all digits until reaches null (\0) character
        for(j=1;st[j]!='\0';j++)
        {
            // if current digit is same as previous digit increment count by 1
            if(st[j]==prev)
                count++;
            else
            {
                // store count and digit
                temp[index++]=(count+48);
                temp[index++]=prev;
                // set previous to current digit
                prev = st[j];
                // set count to 1
                count=1;
            }
        }
        // last digit count will miss in the loop. so store count and digit
        temp[index++]=(count+48);
        temp[index++]=prev;
        temp[index++]='\0';

        // store the new value into st array
        for(j=0;j<index;j++)
        {
            st[j]=temp[j];
        }
        st[j]='\0';

        // print the newly formed value
        cout<<st<<" ";
        
    }
    cout<<""<<endl;

}
