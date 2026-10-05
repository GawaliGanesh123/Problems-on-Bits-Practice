/* Accept two numbers from user and swap them using XOR.

Input- 10
        20
Output- Numbers after swapping : 20 10

Input- 25
        50
Output- Numbers after swapping : 50 25

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter first number : \n";
    cin>>iValue1;

    cout<<"Enter second number : \n";
    cin>>iValue2;

    iValue1 = iValue1 ^ iValue2;
    iValue2 = iValue1 ^ iValue2;
    iValue1 = iValue1 ^ iValue2;

    cout<<"Numbers after swapping : "<<iValue1<<" "<<iValue2<<"\n";
    
    return 0;
}




