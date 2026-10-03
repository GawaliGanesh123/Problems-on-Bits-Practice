/* Accept number from user and find the position of the first ON bit.

Input- 10
Output- First ON bit is at position : 2

Input- 40
Output- First ON bit is at position : 4

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int FirstONBit(int iNo)
{
    int iPos = 1;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            return iPos;
        }

        iNo = iNo >> 1;
        iPos++;
    }

    return 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = FirstONBit(iValue);

    cout<<"First ON bit is at position : "<<iRet<<"\n";
    
    return 0;
}
