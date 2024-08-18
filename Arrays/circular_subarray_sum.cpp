 #include<iostream>
 using namespace std;
 int sum_cricular(int arr[],int n)
 {
  int res=arr[0];
  
  for(int i=0;i<n;i++)
  {
    int curr_max=arr[i];
    int curr_sum=arr[i];
    int sum=0;
    for(int j=1;j<n;j++)
    {
      int index=(i+j)%n;
      curr_max+=arr[index];
      curr_max=max(curr_max,curr_sum);//This checks for the maximum sub array sum found from the given ith index to the jth index
    }
    res=max(res,curr_max);// This 
    

  }
  return res;
 }
 int main()
 {
  int arr[]={3,-4,5,6,-8,7};
  cout<<"The maximum sum of circular subarray is: "<<sum_cricular(arr,6);
  return 0;
 }