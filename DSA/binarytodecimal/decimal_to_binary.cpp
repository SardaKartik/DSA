/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number;
    cout << "enter the decimal number " << endl;
    cin >> number;

    int ans=0;
    int i=0;
    while(number != 0)
    {
        int bit = number&1;
        ans =(bit*pow(10,i))+ans;
        number = number >> 1;
        i++;
    }

    cout << " the binary of a number is " << ans << endl;
    
    cout << "converting binary to decimal " << endl;
 
    i=0;
    int ans1=0;
    while(ans !=0)
    {
        int bit =ans%10;
        if(bit==1)
        {
            ans1=ans1+pow(2,i);
        }
        ans =ans/10;
        i++;
    }

    cout << ans1 << endl;
    return 0;
}
