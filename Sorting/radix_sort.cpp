#include <iostream>
#include <climits>
using namespace std;

void counting_sort(int arr[], int n, int exp) {
    int* output = new int[n]();
    int* count = new int[10]();

    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    delete[] output;
    delete[] count;
}

void radix_sort(int arr[], int n) {
    int max_ele = INT_MIN;
    for (int i = 0; i < n; i++) {
        max_ele = arr[i] > max_ele ? arr[i] : max_ele;
    }

    for (int exp = 1; max_ele / exp > 0; exp *= 10) {
        counting_sort(arr, n, exp);
    }
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    radix_sort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
