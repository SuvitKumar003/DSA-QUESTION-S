#include<iostream>
using namespace std;

int findelement(int arr[], int l, int h, int ele)
{
    if (l > h)
    {
        return -1;
    }

    int mid = (l + h) / 2;

    if (arr[mid] > ele)
    {
        return findelement(arr, l, mid - 1, ele);  // Return result from recursive call
    }
    else if (arr[mid] < ele)
    {
        return findelement(arr, mid + 1, h, ele);  // Return result from recursive call
    }
    else
    {
        // Check if it's the first occurrence
        if (mid == 0 || arr[mid - 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            return findelement(arr, l, mid - 1, ele);  // Search in the left side for the first occurrence
        }
    }
}

int main()
{
    int len, element;
    cout << "Enter the length of the array: ";
    cin >> len;

    int arr[len];
    cout << "Enter the elements of the array in sorted order: " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be found: ";
    cin >> element;

    int result = findelement(arr, 0, len - 1, element);  // Call the function

    if (result != -1)
        cout << "Element found at index " << result+1 << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
