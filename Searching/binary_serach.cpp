#include<iostream>
using namespace std;

int findelement(int arr[], int z, int l, int h) {
    if (l > h) {
        return -1;
    }

    int mid = l + (h - l) / 2;

    if (arr[mid] == z) {
        return mid;
    } else if (z > arr[mid]) {
        return findelement(arr, z, mid + 1, h);  // Return the result of the recursive call
    } else {
        return findelement(arr, z, l, mid - 1);  // Return the result of the recursive call
    }
}

int main() {
    int len;
    cout << "Enter the length of the array: " << endl;
    cin >> len;

    int arr[len];
    cout << "Enter the elements of the array in sorted order: " << endl;
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    int z;
    cout << "Enter the element to be found: " << endl;
    cin >> z;

    int h = len - 1;
    int l = 0;
    int result = findelement(arr, z, l, h);

    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at position " << result << endl;
    }

    return 0;
}
