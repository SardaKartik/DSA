# include <iostream>
using namespace std;
int main()
{
    int a[]={0,0,1,1,0,1,0,1};
    int j=7;
    int k=0;
    for(int i=0;i<8;i++)
    {
        if(a[k]==0)
        {
            k++;
        }
        if(a[j]==1)
        {
            j--;
        }
        if(a[k]==1 && a[j]==0)
        {
            swap(a[k],a[j]);
            k++;
            j--;
        }
        if(k>=j)
        {
            break;
        }
    }

    for(int i=0;i<8;i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}