#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  //Diffrent ways of creating 2d array
  //1. using simple array
  int arr[2][3]={1,2,3,4,5,6};
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  //2. using vector
  //outer vetor is used for stroing the number of rows and the inner vector is used for holding the content of the columns
  vector<vector<int>> vec1;
  for(int i=0;i<2;i++)
  {
    vector<int> temp(3,0);
    vec1.push_back(temp);
  }
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<vec1[i][j]<<" ";
    }
    cout<<endl;
  }
  //3. Using the double pointer approach
  int **arr1=new int*[2];
  for(int i=0;i<2;i++)
  {
    arr1[i]=new int[3];//initializinng the all rows with 3 columns in the end to make a 2d array
  }
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }
  
}