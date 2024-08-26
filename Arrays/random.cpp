#include<iostream>
#include<vector>
using namespace std;
vector<long long> arrsum;
 void sum_arr(int arr[],int n)
{
    long long sum=0;
    arrsum.resize(n);
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        arrsum.push_back(sum);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arrsum[i]<<" ";
    }
}
int main()
{

vector<long long> arr;
arr[]={8,8,3,7,8,2,7,2};
sum_arr(arr,8);
}