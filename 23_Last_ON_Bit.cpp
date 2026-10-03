/* Accept number from user and find the position of the last ON bit.

Input- 10
Output- Last ON bit is at position : 4

Input- 40
Output- Last ON bit is at position : 6

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int LastONBit(int iNo)
{
    int iPos = 1;
    int iRet = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iRet = iPos;
        }

        iNo = iNo >> 1;
        iPos++;
    }

    return iRet;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = LastONBit(iValue);

    cout<<"Last ON bit is at position : "<<iRet<<"\n";
    
    return 0;
}
