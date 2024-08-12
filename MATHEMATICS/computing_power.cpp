#include<iostream>
using namespace std;
long long power(int N,int R)
    {
       //Your code here
       if(R==0)
       {
           return 1;
       }
       //int temp=1;
      int temp=power(N,R/2);
        temp=temp*temp;
       if(R%2==0)
       {
           temp=temp;
       }
       else
       {
           temp=temp*N;
       }
       return (temp%1000000007);
        
    }
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Sum of the digits of the number is: "<<power(12,21);
    return 0;
}