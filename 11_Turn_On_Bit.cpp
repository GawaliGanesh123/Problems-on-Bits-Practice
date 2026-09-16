/* Accept number and position from user and turn ON the bit at given position.

Input- 40
        5
Output- Number after bit ON : 56

Input- 168
        4
Output- Number after bit ON : 184

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int OnBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;
    
    iMask = iMask << (iPos -1);
    
    iResult = iNo | iMask;
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0, iLocation = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = OnBit(iValue,iLocation);

    cout<<"Number after bit ON : "<<iRet<<"\n";
    
    return 0;
}               



