#include<iostream>
#include<cstdlib>  // For rand() and srand()
#include<ctime>    // For time()

using namespace std;

int peak_element(int arr[], int len) {
    int low = 0, high = len - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        // Check if the current element is the peak
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && 
            (mid == len - 1 || arr[mid + 1] <= arr[mid])) {
            return mid;
        }

        // If the left neighbor is greater, search in the left half
        if (mid > 0 && arr[mid - 1] > arr[mid]) {
            high = mid - 1;
        }
        // Otherwise, search in the right half
        else {
            low = mid + 1;
        }
    }
    return -1; // No peak element found
}

int main() {
    srand(time(0)); // Seed for random number generation
    const int len = 20;
    int arr[len];

    // Generate an array of 20 random integers
    for (int i = 0; i < len; ++i) {
        arr[i] = rand() % 100; // Random integers between 0 and 99
    }

    // Print the array
    cout << "Array: ";
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find peak element
    int peak = peak_element(arr, len);
    if (peak != -1) {
        cout << "Peak element at index: " << peak << " with value: " << arr[peak] << endl;
    } else {
        cout << "No peak element found." << endl;
    }

    return 0;
}
