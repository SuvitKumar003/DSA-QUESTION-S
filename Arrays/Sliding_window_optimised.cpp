#include<iostream>
using namespace std;

int sum1(int arr[], int n, int k) {
    if (k > n) {
        cout << "Window size is larger than the array size." << endl;
        return -1;
    }

    int max_sum = 0;
    int sum12 = 0; 

    // Sum the first 'k' elements
    for (int i = 0; i < k; i++) {
        sum12 += arr[i];
    }

    max_sum = sum12;

    // Slide the window from the k-th element to the end
    for (int i = k; i < n; i++) {
        sum12 += arr[i] - arr[i - k];  // Slide the window by adding the next element and subtracting the first element of the previous window
        max_sum = max(max_sum, sum12);  // Update the maximum sum if the current sum is greater
    }

    return max_sum;
}

int main() {
    int x1;
    cout << "Enter the size of the array: ";
    cin >> x1;

    int arr[x1];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < x1; i++) {
        cin >> arr[i];
    }

    cout << "Enter the window size: ";
    int k;
    cin >> k;

    int maxSum = sum1(arr, x1, k);
    if (maxSum != -1) {
        cout << "The maximum sum obtained is " << maxSum << endl;
    }

    return 0;
}
