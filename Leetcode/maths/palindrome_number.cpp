#include<iostream>
using namespace std;
class Solution
{
public:
bool check(int i,int j,string s)
{
    if(i>j)
    {
        return true;
    }
    if(s[i]!=s[j])
    {
        return false;
    }
    check(i++,j--,s);
}
    bool isPalindrome(int x) 
    {
        string s=x;
        int j=s.length()-1;
        int i=0;
        bool res=check( i,j,s);
        return res;
    }
};
int main()
{
    Solution s;
    int x;
    cin>>x;
    cout<<s.isPalindrome(x);
    return 0;
}