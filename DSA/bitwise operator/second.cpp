# include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    cout << a << " and " << b << endl;
    cout << "and " << (a&b) << endl;
    cout << "or " << (a|b) << endl;
    cout << "not " << (~a) << endl;
    cout << "xor " << (a^b) << endl;

    cout << "left shit operator " << (15<<2) << endl;
    cout << "right shift operator " << (15>>2) << endl;
    return 0;
}