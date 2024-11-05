#include<iostream>
using namespace std;
int search_in_sorted_matrix(int arr[3][3],int x)
{
  int i=2;
  int down=0;
  while(i>0 && down<3)
  {
    if(arr[i][down]==x)
    {
      cout<<"Element found at"<<i<< " "<<down;
    }
    if(arr[i][down]>x)
    {
      i--;
    }
    else
    {
      down++;
    }
  }
}
int main()
{
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  search_in_sorted_matrix(arr,5);
  return 0;
}