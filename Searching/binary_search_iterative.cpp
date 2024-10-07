#include<iostream>
using namespace std;

int findelement(int arr[], int len, int x)  // Change void to int
{
    int h = len - 1;
    int l = 0;
    int mid;
    
    while (l <= h)
    {
        mid = (h + l) / 2;
        
        if (arr[mid] == x)
        {
            return mid;  // Return the index if the element is found
        }
        else if (x > arr[mid])  // Use x instead of z
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main()
{
    int len1;
    cout << "Enter the length of the array: " << endl;
    cin >> len1;

    int arr[len1];
    cout << "Enter the elements of the array in sorted order: " << endl;
    for (int i = 0; i < len1; i++) {
        cin >> arr[i];
    }

    int z;
    cout << "Enter the element to be found: " << endl;
    cin >> z;

    int result = findelement(arr, len1, z);  // Call the function correctly
    
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
