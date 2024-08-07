#include<iostream>
using namespace std;
int number_of_pieces(int length,int a,int b,int c)
{
 if(length==0)
 {
  return 0;
 }
 if(length<0)
 {
  return -1;
 }
 int x=max(number_of_pieces(length-b,a,b,c),number_of_pieces(length-c,a,b,c));
 int res=max(number_of_pieces(length-a,a,b,c),x);
 if(res==-1)
 {
  return -1;
 }
 return res+1;

}
int main()
{
  cout<<" Enter the length of the pieces "<<endl;
  int len;
  cin>>len;
  int a,b,c;
  cout<<" Enter the length of the pieces in which rope can be cut"<<endl;
  cin>>a>>b>>c;
  cout<<" The maximum  number rof pieces ibn which rope can be cut is "<<(1+number_of_pieces(len,a,b,c));
}