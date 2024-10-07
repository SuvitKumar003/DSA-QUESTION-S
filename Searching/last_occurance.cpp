#include<iostream>
using namespace std;

int findelement(int arr[], int len, int ele)
{
    int l = 0;
    int h = len - 1;
    int mid;
    int result = -1;

    while (l <= h)
    {
        mid = (l + h) / 2;

        if (arr[mid] < ele)
        {
            l = mid + 1;
        }
        else if (arr[mid] > ele)
        {
            h = mid - 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;  // Return the index of the element
            }
            else
            {
                l=mid+1;  // Continue searching in the left half
            }
        }
    }
    return result;  // Return -1 if the element is not found
}

int main()
{
    int len, element;
    cout << "Enter the length of the array: " << endl;
    cin >> len;

    int arr[len];
    cout << "Enter the elements of the array in sorted order: " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be found: " << endl;
    cin >> element;

    int result = findelement(arr, len, element);
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;  // Output index directly
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
