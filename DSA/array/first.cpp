#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    // swap alternator 
    int n;
    cout << "enter the size of the array " << endl;
    cin >> n;
    int a[n];  
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
    cout << "before swapping " << endl;
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    for(int i=0;i<n-2;i=i+2)
    {
        swap(a[i],a[i+1]);
    }
    cout << "after swapping " << endl;
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}