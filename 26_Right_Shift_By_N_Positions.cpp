/* Accept a number from user and position from user and perform right shift operation by N positions.

Input- 40
        2
Output- Right Shift : 10

Input- 56
        3
Output- Right Shift : 7

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

    iResult = iValue >> iPos;

    cout<<"Right Shift : "<<iResult<<"\n";
    
    return 0;
}
