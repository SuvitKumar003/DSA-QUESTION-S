#include<iostream>
#include<vector>
using namespace std;

int weighted_sum(int arr[], int n, int start, int end)
{
    int sum = 0;
    vector<int> simple_sum(n, 0);
    for(int i = start; i <= end; i++)
    {
        sum += arr[i];
        simple_sum[i] = sum;
    }
    
    vector<int> weight_array(n, 0);
    for(int i = 0; i < n; i++)
    {
        weight_array[i] = i * arr[i];
    }

    int weighted_sum_result = weight_array[end] - (start > 0 ? weight_array[start-1] : 0);
    int weighted_simple_sum = (start > 0 ? (start-1) * (simple_sum[end] - simple_sum[start-1]) : 0);

    return weighted_sum_result - weighted_simple_sum;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start, end;
    cout << "Enter the starting index of the subarray: ";
    cin >> start;
    cout << "Enter the ending index of the subarray: ";
    cin >> end;
    cout << "The weighted sum of the subarray is: " << weighted_sum(arr, n, start, end) << endl;
    return 0;
}
