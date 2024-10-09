#include<iostream>
using namespace std;
int lastoccurance(int arr[],int low,int high,int ele)
{
    int mid=(low+high)/2;
    if(ele<arr[mid])
    {
        return lastoccurance(arr,low,mid-1,ele);
    }
    else if(ele>arr[mid])
    {
        return lastoccurance(arr,mid+1,high,ele);
    }
    else if (mid==high || arr[mid]!=arr[mid+1])
    {
        return mid;
    }
    else
    {
        return lastoccurance(arr,mid+1,high,ele);
    }
}