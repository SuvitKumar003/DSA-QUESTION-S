#include<iostream>
#include<string>
using namespace std;
int main()
{
string keypadArr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
for(int i=0;i<10;i++)
{
  for(int j=0;j<keypadArr[i].length();j++){
cout<<keypadArr[i][j]<<endl;
  }
  
}
}