#include <iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> result1;

void negative(int  n)
{
    if(N<=0)
    {
        result1.push_back(N);
        return;
        
    }
    result1.push_back(N);
    negative(N-5);
}
void positive(int n,int n1)
{
    if(n==n1)
    {
        result1.push_back(n);
        return;
    }
    result1.push_back(n);
    positive(n-5,n1);
    
}

    vector<int> pattern(int N,int n1=0,int n2=0){
        // code here
       negative(N);
       positive(N,N);
       return result1;
}
};
int main() {
    int N;
    cin>>N;
    Solution ob;
    vector<int> result=ob.pattern(N);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}