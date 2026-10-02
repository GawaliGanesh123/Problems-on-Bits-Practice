/* Accept number from user and count number of ON bits in that number.

Input- 10
Output- Number of ON bits : 2

Input- 15
Output- Number of ON bits : 4

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int CountONBits(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCount++;
        }

        iNo = iNo >> 1;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = CountONBits(iValue);

    cout<<"Number of ON bits : "<<iRet<<"\n";
    
    return 0;
}


