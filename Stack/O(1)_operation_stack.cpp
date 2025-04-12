#include<iostream>
using namespace std;
#include<stack>
int main()
{
  stack<int> st1;
  stack<int> st2;
  int arr={5, 15, 10, 8, 6, 12, 9, 18};
  for(int i=0;i<8;i++)
  {
    st1.push(arr[i]);
    if(st1.top()>=arr[i])
    {
      st2.push(st1.top());
    }
    
  }
}