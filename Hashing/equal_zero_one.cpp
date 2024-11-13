#include <iostream>
#include <unordered_map>
using namespace std;

int length_subarray(int arr[], int n) {
    unordered_map<int, int> sum_map;
    int max_length = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += (arr[i] == 0) ? -1 : 1;

        if (sum == 0) {
            max_length = i + 1;
        }

        if (sum_map.find(sum) != sum_map.end()) {
            max_length = max(max_length, i - sum_map[sum]);
        } else {
            sum_map[sum] = i;
        }
    }

    return max_length;
}

int main() {
    int arr[] = {0, 0, 1, 1, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The maximum length is " << length_subarray(arr, n);
    return 0;
}
