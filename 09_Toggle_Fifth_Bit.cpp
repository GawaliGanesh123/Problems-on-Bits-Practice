/* Accept number from user and toggle the fifth bit of that number.

Input- 25
Output- Number after bit toggle : 9

Input- 9
Output- Number after bit toggle : 25

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 


#include<iostream>
using namespace std;

int ToggleBit(int iNo)
{
    int iMask = 0x10;
    int iResult = 0;
    iResult = iNo ^ iMask;
    return iResult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Number after bit toggle : "<<iRet<<"\n";
    
    return 0;
}


