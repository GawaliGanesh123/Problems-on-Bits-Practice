/* Accept number from user and check whether 3rd and 7th bit of that number is on or off.

Input- 68
Output- 3rd and 7th Bits are ON

Input- 64
Output- 3rd and 7th Bits are OFF

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x44;
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
        cout<<"3rd and 7th Bits are ON\n";
    }
    else
    {
        cout<<"3rd and 7th Bits are OFF\n";
    }
    
    return 0;
}



