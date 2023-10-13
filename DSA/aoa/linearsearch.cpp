# include <iostream>
# include <cstdlib>
using namespace std;
int main()
{
cout << "linear search" << endl;
int n,search,count=0;
cout << "enter the number of element " << endl;
cin >> n;
int array[n];
for(int i=0;i<n;i++)
{
  array[i]=rand()%100;
}
cout << "printing the array" << endl;
for(int i=0;i<n;i++)
{
  cout << array[i]  << " ";
}
cout << "enter  the number to be search " << endl;
cin >> search;

for(int i=0;i<n;i++)
{
if(array[i]==search)
{
count++;
cout << "the number " << search << " is in array at index  " << i << endl;
break;
}
}

if(count==0)
{
cout << "the number " << search << " is not in array " << endl;
}
return 0;
}
