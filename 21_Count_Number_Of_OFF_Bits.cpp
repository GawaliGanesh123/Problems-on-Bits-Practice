/* Accept number from user and count number of OFF bits in that number.

Input- 10
Output- Number of OFF bits : 30

Input- 15
Output- Number of OFF bits : 28

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int CountOFFBits(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 0)
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

    iRet = CountOFFBits(iValue);

    cout<<"Number of OFF bits : "<<iRet<<"\n";
    
    return 0;
}


