/* Accept a number from user and check whether it is odd or even using bitwise operator.

Input- 10
Output- Number is Even

Input- 7
Output- Number is Odd

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std; 

int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    if((iValue & 1) == 0)
    {
        cout<<"Number is Even\n";
    }
    else
    {
        cout<<"Number is Odd\n";
    }
    
    return 0;
}




