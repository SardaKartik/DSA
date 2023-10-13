#include <iostream>
using namespace std;
int main()
{
    int rows;
    int coloum;

    /*cout << "1 pattern" << endl;
    cout << "enter the number of rows " << endl;
    cin >> rows;
    for (int i = 0;i <rows/2 ; ++i)
    {
        for(int j=0;j<rows/2;j++)
        {
            if(j<rows/2-i-1)
            {
                cout << " ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
    for(int i=rows/2;i<rows;i++)
    {
        for(int j=rows/2;j<rows;j++)
        {
            if(j>=i)
            {
                cout << "* ";
            }
            else{
                cout << " " ;
            }
        }
        cout << endl;
    }*/

    /*cout << "2 pattern " << endl;
    cout << "enter the number of rows in the pattern " << endl;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        // for hollow structure
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        // for the star pattern
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for(int j=0;j<2*rows-2*i-1;j++)
        {
            if(j==0||j==2*rows-2*i-2)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }*/

    /*cout << "3 pattern" << endl;
    cout << "enter the number of rows " <<endl;
    cin >> rows;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i;j++)
        {
            cout << "*";
        }
        for(int j=0;j<i+1;j++)
        {
            cout << " ";
        }
        for(int j=0;j<i;j++)
        {
            cout << " ";
        }
        for(int j=0;j<rows-i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout << "*";
        }
        for(int j=0;j<rows-i;j++)
        {
            cout << " ";
        }
        for(int j=0;j<rows-i-1;j++)
        {
            cout << " ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/
    /*
    cout << "4 pattern" << endl;
    cout << "enter the number of rows " << endl;
    cin >> rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout << i+1 ;
            if(j<i)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i;j++)
        {
            cout << rows-i;
            if(j<rows-i-1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }*/

    /*cout << "5 pattern " << endl;
    cout << "enter the number of rows " << endl;
    cin >> rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            int ans=j+1;
            char ch=j+1+'A'-1;
            cout << ch;
        }
        for(int j=i;j>0;j--)
        {
            int ans=j;
            char ch=ans+'A'-1;
            cout << ch;
        }
        cout << endl;
    }*/
    /*cout << "6 pattern ";
    cout << "enter the number of rows " << endl;
    cin >> rows;
    for(int i=0;i<rows-1;i++)
    {
        for(int j=0;j<rows-1;j++)
        {
            if(j==0 || j==i)
            {
                if(j==0)
                {
                    cout << "1";
                }
                else{
                    cout << i+1;
                }
            }
            else{
                cout <<" ";
            }
        }
        cout << endl;
    }
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout<<j+1;
        }
        cout << endl;
    }*/

    /*cout << "7 pattern " << endl;
    cout << "enter the total number of rows " << endl;
    cin >> rows;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i-1;j++)
        {
            cout << " ";
        }

        int sum=i+1;
        for(int j=0;j<i+1;j++)
        {
            cout << sum;
            sum+=1;
        }
        int add=i+i;
        for(int j=0;j<i;j++)
        {
            cout << add ;
            add-=1;
        }

        cout << endl;
    }*/

    cout << "8 pattern " << endl;
    cout << "enter the number of rows " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        int k = 1;
        int a=i;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (i == rows - 1)
            {
                if (j % 2 == 0)
                {
                    cout << k;
                    k += 1;
                }
                else{
                    cout << " ";
                }
            }
            else
            {
                if (j == 0 )

                {
                    cout << j+1;
                }
                else if(j==2*i)
                {
                    cout << a+1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}