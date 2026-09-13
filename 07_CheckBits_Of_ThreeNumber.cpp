/* Accept number from user and check whether 14th, 15th and 16th bits of that number are on or off.

Input- 57344
Output- 14,15,16 Bits are ON

Input- 4096
Output- 14,15,16 Bits are OFF

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0xe000;
    int iResult = 0;
    iResult = iNo & iMask;

    if(iResult == iMask)
    {   
        return true;   
    }
    else
    {   
        return false;    
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"14,15,16 Bits are ON\n";
    }
    else
    {
        cout<<"14,15,16 Bits are OFF\n";
    }
    
    return 0;
}


