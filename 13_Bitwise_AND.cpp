/* Accept two numbers from user and perform bitwise AND operation.

Input- 12
       10
Output- Bitwise AND : 8

Input- 15
        7
Output- Bitwise AND : 7

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

    iResult = iValue1 & iValue2;

    cout<<"Bitwise AND : "<<iResult<<"\n";
    
    return 0;
}



  
