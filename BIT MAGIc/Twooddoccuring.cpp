#include<iostream>
using namespace std;

void odd_occuring(int arr[], int size)
{
    int check = 0;
    int a1 = 0, a2 = 0; // Initialize the variables

    // Step 1: Get the XOR of all the elements in the array
    for(int i = 0; i < size; i++)
    {
        check = check ^ arr[i];
    }

    // Step 2: Get the rightmost set bit in the check variable
    int rightmost_set_bit = check & ~(check - 1);

    // Step 3: Divide elements into two groups and XOR separately
    for(int i = 0; i < size; i++)
    {
        if(arr[i] & rightmost_set_bit)
        {
            a1 = a1 ^ arr[i];
        }
        else
        {
            a2 = a2 ^ arr[i];
        }
    }

    cout << "The two odd occurring elements are " << a1 << " " << a2 << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the number for the array: " << endl;
        cin >> arr[i];
    }

    odd_occuring(arr, size);
}
