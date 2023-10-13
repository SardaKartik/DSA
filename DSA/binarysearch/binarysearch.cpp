#include<iostream>
using namespace std;
int binarysearch(int a[],int end,int search)
{
    int start=0;
    int mid=start + (end-start)/2;
    while(start<=end)
    {
        if(a[mid]==search)
        {
            return mid;
        }
        if(a[mid]>search)
        {
            end=mid-1;
        }
        if(a[mid]<search)
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    cout << "dsfjsad";
    int a[]={2,4,6,8,10,12,14,16};
    int index;
    index=binarysearch(a,7,10);
    cout << "the number 7 at index is " <<  index << endl;
    index=binarysearch(a,7,13);
    cout << index << endl;
    return 0;
}