/* Accept two numbers from user and check whether they are equal using XOR.

Input- 10
        10
Output- Numbers are Equal

Input- 10
        20
Output- Numbers are Not Equal

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iResult = 0;

    cout<<"Enter first number : \n";
    cin>>iValue1;

    cout<<"Enter second number : \n";
    cin>>iValue2;

    iResult = iValue1 ^ iValue2;

    if(iResult == 0)
    {
        cout<<"Numbers are Equal\n";
    }
    else
    {
        cout<<"Numbers are Not Equal\n";
    }
    
    return 0;
}
