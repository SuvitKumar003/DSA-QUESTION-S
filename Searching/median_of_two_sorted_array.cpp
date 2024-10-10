#include <iostream>
#include <climits>  // For INT_MIN and INT_MAX
using namespace std;

int median_sorted_array(int arr1[], int arr2[], int len1, int len2) {
    // Ensure that arr1 is the smaller array
    if (len1 > len2) {
        return median_sorted_array(arr2, arr1, len2, len1);
    }

    int low = 0, high = len1;

    while (low <= high) {
        int mid1 = (low + high) / 2;
        int mid2 = (len1 + len2 + 1) / 2 - mid1;

        int l1 = (mid1 == 0) ? INT_MIN : arr1[mid1 - 1];
        int r1 = (mid1 == len1) ? INT_MAX : arr1[mid1];

        int l2 = (mid2 == 0) ? INT_MIN : arr2[mid2 - 1];
        int r2 = (mid2 == len2) ? INT_MAX : arr2[mid2];

        if (l1 <= r2 && l2 <= r1) {
            // If total length is even
            if ((len1 + len2) % 2 == 0) {
                return (max(l1, l2) + min(r1, r2)) / 2;
            } else {
                return max(l1, l2);
            }
        } else if (l1 > r2) {
            high = mid1 - 1;
        } else {
            low = mid1 + 1;
        }
    }

    return 0; // Only in case no median is found, which shouldn't happen
}

int main() {
    int arr1[] = {1, 3, 8, 9, 15};
    int arr2[] = {7, 11, 18, 19, 21, 25};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Median: " << median_sorted_array(arr1, arr2, len1, len2) << endl;

    return 0;
}
