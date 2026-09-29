/* Accept a number and position from user and create a mask for that position.

Input- 10
        3
Output- Mask : 4

Input- 25
        5
Output- Mask : 16

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iPos = 0;
    int iMask = 0x1;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iPos;

    iMask = iMask << (iPos - 1);

    cout<<"Mask : "<<iMask<<"\n";
    
    return 0;
}
