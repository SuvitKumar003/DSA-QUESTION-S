#include<iostream>
using namespace std;
void remove_duplicate(int arr[],int n)
{
  int num=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==arr[i+1])
    {
      arr[i+1]=0;
    }
    }
  }
}