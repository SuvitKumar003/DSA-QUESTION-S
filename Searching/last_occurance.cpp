#include<iostream>
using namespace std;
int lastoccurance(int arr[],int low,int high,int ele,int len)
{
    int mid=(low+high)/2;
    if(ele<arr[mid])
    {
        return lastoccurance(arr,low,mid-1,ele,len);
    }
    else if(ele>arr[mid])
    {
        return lastoccurance(arr,mid+1,high,ele,len);
    }
    else if (mid==len-1 || arr[mid]!=arr[mid+1])
    {
        return mid;
    }
    else
    {
        return lastoccurance(arr,mid+1,high,ele,len);
    }
}
int main()
{
    int arr[]={1,2,3,4,4,4,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ele=4;
    int low=0;
    int high=n-1;
    
    cout<<lastoccurance(arr,low,high,ele,n);
    return 0;
}