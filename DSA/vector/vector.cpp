#include <iostream>
#include <vector>
using namespace std;
int main()
{
    /*vector <int> arr;
    int ans;
    ans=sizeof(arr)/sizeof(int);
    cout << ans;*/

    /*cout << "unique element " << endl; 
    int n;
    cout << "enter the size of the vector" << endl;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin >> arr[i];
    }
    int a;
    a=0;// in xor it cannot make any difference in the answer with zero 
    for(int i=0;i<arr.size();i++)
    {
        a=a^arr[i];
    }
    cout << a;*/

    /*cout << "union of two vector " << endl;

    vector<int> a(5);
    vector<int> b(5);
    vector<int> arr;

    cout << "enter the first number " << endl;
    for(int i=0;i<a.size();i++)
    {
        cin >> a[i];
    }

    cout << "enter the second number " << endl;
    for(int i=0;i<b.size();i++)
    {
        cin >> b[i];
    }

    
    for(int i=0;i<a.size();i++)
    {
        arr.push_back(a[i]);
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                b[j]=-1;
            }
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]!=-1)
        {
            arr.push_back(b[i]);
        }
    }


    cout << "printing the union of two array " << endl;
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }*/



    /*cout << "intersection of two array " << endl;    
    vector<int> a(5);
    vector<int> b(5);
    vector<int> arr;

    cout << "enter the first array " << endl;
    for(int i=0;i<a.size();i++)
    {
        cin >> a[i];
    }

    cout << "enter the second array " << endl;
    for(int i=0;i<b.size();i++)
    {
        cin >> b[i];
    }

    
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                b[j]=-1;
                arr.push_back(a[i]);
                break;
            }
        }
    }

    cout << "intersection of two array " << endl;
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }*/

    /*cout << "pair sum " << endl;

    vector <int> a(8);
    int k;
    cout << "enter the sum of the pair " << endl;
    cin >> k;
    cout << "input array " << endl;
    for(int i=0;i<a.size();i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<a.size();i++)
    {
        for(int j=i;j<a.size();j++)
        {
            if(k==a[i]+a[j])
            {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }*/

    /*cout << "sort o's and 1's " << endl;
    int size;
    cout << "enter the number of element of the array " << endl;
    cin >> size;

    vector <int> arr;
    
    for(int i=0;i<size;i++)
    {
        int a;
        cout << "enter the element in the array " << endl;
        cin >> a;
        arr.push_back(a);
    }

    int i=0;
    int j=arr.size()-1;

    while(i<j && i<arr.size())
    {
        if(arr[i]==0)
        {
            i++;
        }
        else
        {
            swap(arr[i],arr[j]);
            j--;
        }
    }

    for(auto val : arr)
    {
        cout << val << " ";
    }*/

    vector<int> a{1,5,10,20,40,80};
    vector<int> b{6,7,20,80,100};
    vector<int> c{3,4,15,20,30,70,80,120};

    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size() &&c.size())
    {
        if(a[i]==b[i]==c[i])
        {
            return a[i];
        }
        else if(a[i]>b[j] && a[i]>c[k])
        {
            j++;
            k++;
        }
        else if(a[i]<b[j] && b[j]>c[k])
        {
            i++;
            k++;
        }
        else if(a[i]<c[k] && a[i]>c[k])
    }

    return 0;
}