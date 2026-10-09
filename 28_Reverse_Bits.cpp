/* Accept a number from user and reverse its bits.

Input- 10
Output- Reverse bits : 1342177280

Input- 5
Output- Reverse bits : -1610612736

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    for(int i = 0; i < 32; i++)
    {
        iResult = (iResult << 1) | (iValue & 1);
        iValue = iValue >> 1;
    }

    cout<<"Reverse bits : "<<iResult<<"\n";
    
    return 0;
}



