# include <iostream>
using namespace std;
int main()
{
    int rows;
    int coloums;
    // 1 pattern 
    /*cout << "1 pattern " << endl;
    cout << "enter the number of rows and coloms " << endl;
    cin >> rows >> coloums;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<coloums;j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/
    /*

    //2 pattern 
    cout << "2 pattern " << endl;
    cout << "enter the number of rows and coloums " << endl;
    cin >> rows >> coloums;
    for(int i=0;i<rows;i++)
    {
        if(i==0 || i==rows-1)
        {
            for(int j=0;j<coloums;j++)
            {
                cout << "*";
            }
        }
        else{
            cout << "*";
            for(int k=0;k<coloums-2;k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    */
   /*

    cout << "pattern 3" << endl;
    cout << "enter the number of rows and coloums " << endl;
    cin >> rows >> coloums;
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
    */
   /*
    cout << "pattern 4" << endl;
    cout << "enter the number of rows and coloums " << endl;
    cin >> rows >> coloums;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */
   /*
    cout << "pattern 5 " << endl;
    cout << "enter the number of rows " << endl;
    cin >> rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout << j;
        }
        cout << endl;
    }
    */

    /*
    cout << "pattern 6" << endl;
    cout << "enter the number of rows " << endl;
    cin >> rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i;j++)
        {
            cout << j;
        }
        cout << endl;
    }
    */
   
    cout << "pattern 7" << endl;
    cout << "enter the number of rows " << endl;
    cin >> rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            if(j<rows-i-1)
            {
                cout  << " ";
            }
            else{
                cout<< "* ";
            }
        }
        cout << endl;
    }
    
    cout << "pattern 8" << endl;
    cout << "enter the number of rows " << endl;
    cin >> rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            if(j>=i)
            {
                cout << "* ";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}