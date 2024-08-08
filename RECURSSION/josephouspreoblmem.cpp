#include<iostream>
using namespace std;
int returnJosephous(int n,int k)
{
 if(n==1)
 {
  return 0;
 }
 return (returnJosephous(n-1,k)+k)%n;
 }
 int main()
 {
  int n,k;
  cout<<"Enter the number of people"<<endl;
  cin>>n;
  cout<<"Enter the number of people to be skipped"<<endl;
  cin>>k;
  cout<<"The person who will survive is "<<returnJosephous(n,k)+1<<endl;
  return 0;
 }