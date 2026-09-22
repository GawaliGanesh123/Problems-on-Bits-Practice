/* Accept a number from user and perform left shift operation by one position.

Input- 10
Output- Left Shift : 20

Input- 7
Output- Left Shift : 14

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

    iResult = iValue << 1;

    cout<<"Left Shift : "<<iResult<<"\n";
    
    return 0;
}
