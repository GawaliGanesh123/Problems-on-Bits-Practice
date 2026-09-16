/* Accept number and position from user and turn OFF the bit at given position.

Input- 184
        5
Output- Number after bit OFF : 168

Input- 168
        4
Output- Number after bit OFF : 160

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int OffBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;
    
    iMask = iMask << (iPos -1);
    iMask = ~iMask;
    
    iResult = iNo & iMask;
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0, iLocation = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = OffBit(iValue,iLocation);

    cout<<"Number after bit OFF : "<<iRet<<"\n";
    
    return 0;
}
