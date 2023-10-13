# include <iostream>
# include <cstdlib>
# include <algorithm>
using namespace std;
void binarysearch(int a[],int s,int e,int search)
{
if(s>e)
{
cout << "the number is not in array " << endl;
return ;
}
int mid=s+e/2;
if(a[mid]==search)
{
cout << "the element is in the array at index " << mid << endl;
return;
}
if(a[mid]>search)
{
   binarysearch(a,s,mid-1,search);
}
else
{
binarysearch(a,mid+1,e,search);
}
}
int main()
{
cout << "Binary Search " << endl;
int n;
cout << "number of element" << endl;
cin >> n;
int array[n];
for(int i=0;i<n;i++)
{
array[i]=rand()%100;
}
sort(array,array+n);

cout << "array" << endl;
for(int i=0;i<n;i++)
{
  cout << array[i]  << " ";
}

int search;
cout << "number to be search " << endl;
cin >> search;

binarysearch(array,0,n-1,search);
return 0;
}