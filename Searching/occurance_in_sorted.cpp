#include<iostream>
using namespace std;

int find_first_occurrence(int arr[], int low, int high, int ele)
{
    if (low > high) return -1;

    int mid = (low + high) / 2;

    if ((mid == 0 || ele > arr[mid - 1]) && arr[mid] == ele)
        return mid;

    if (ele < arr[mid])
        return find_first_occurrence(arr, low, mid - 1, ele);

    return find_first_occurrence(arr, mid + 1, high, ele);
}

int find_last_occurrence(int arr[], int low, int high, int ele, int len)
{
    if (low > high) return -1;

    int mid = (low + high) / 2;

    if ((mid == len - 1 || ele < arr[mid + 1]) && arr[mid] == ele)
        return mid;

    if (ele < arr[mid])
        return find_last_occurrence(arr, low, mid - 1, ele, len);

    return find_last_occurrence(arr, mid + 1, high, ele, len);
}

int number_of_occurrences(int arr[], int ele, int len)
{
    int first = find_first_occurrence(arr, 0, len - 1, ele);

    if (first == -1)
        return 0;

    int last = find_last_occurrence(arr, 0, len - 1, ele, len);

    return last - first + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 4;

    int count = number_of_occurrences(arr, ele, n);

    if (count == 0)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "The number of occurrences are " << count;
    }

    return 0;
}
