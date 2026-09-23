/* Accept a number from user and perform right shift operation by one position.

Input- 10
Output- Right Shift : 5

Input- 8
Output- Right Shift : 4

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

    iResult = iValue >> 1;

    cout<<"Right Shift : "<<iResult<<"\n";
    
    return 0;
}
