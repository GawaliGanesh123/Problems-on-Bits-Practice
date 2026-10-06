/* Accept a number from user and position from user and perform left shift operation by N positions.

Input- 10
        2
Output- Left Shift : 40

Input- 7
        3
Output- Left Shift : 56

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int main()
{
    int iValue = 0, iPos = 0;
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iPos;

    iResult = iValue << iPos;

    cout<<"Left Shift : "<<iResult<<"\n";
    
    return 0;
}
