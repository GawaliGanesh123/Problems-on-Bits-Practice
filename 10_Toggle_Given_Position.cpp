/* Accept number and position from user and toggle the bit at given position.

Input- 25
        5
Output- Number after bit toggle : 9

Input- 25
        4
Output- Number after bit toggle : 17

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int ToggleBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;
    iMask = iMask << (iPos -1);
    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0, iLocation = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = ToggleBit(iValue,iLocation);

    cout<<"Number after bit toggle : "<<iRet<<"\n";
    
    return 0;
}
