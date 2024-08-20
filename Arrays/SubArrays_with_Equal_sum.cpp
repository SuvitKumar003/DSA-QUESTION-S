#include<iostream>
using namespace std;

void index2(int arr[], int n)
{
    int sum = 0;
    
    // Calculate the total sum of the array
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    // If the sum is not divisible by 3, there can't be two subarrays with equal sums
    if (sum % 3 != 0)
    {
        cout << "No such subarray exists." << endl;
        return;
    }
    
    int sum1 = sum / 3;
    int sum2 = 2 * sum1;
    int x = 0;
    int ind1 = -1;
    int ind2 = -1;

    for (int i = 0; i < n; i++)
    {
        x += arr[i];
        
        // Check for the first occurrence where cumulative sum equals sum1
        if (x == sum1 && ind1 == -1)
        {
            ind1 = i;
        }
        // Check for the first occurrence where cumulative sum equals sum2
        else if (x == sum2 && ind2 == -1)
        {
            ind2 = i;
        }
    }

    // If both indices are found, print them
    if (ind1 != -1 && ind2 != -1)
    {
        cout << ind1 << " " << ind2 << endl;
    }
    else
    {
        cout << "No such subarray exists." << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    index2(arr, n);
    return 0;
}
