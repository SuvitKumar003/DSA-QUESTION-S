#include<iostream>
using namespace std;

int* intersection(int arr1[], int arr2[], int s1, int s2, int &s3) {
    s3 = 0;
    int* arr3 = new int[min(s1, s2)];
    int i = 0, j = 0, k = 0;

    while (i < s1 && j < s2) {
        if (i > 0 && arr1[i] == arr1[i-1]) {
            i++;  // Skip duplicates in arr1
            continue;
        }

        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            arr3[k++] = arr1[i];
            i++;
            j++;
        }
    }
    
    s3 = k;  // Set the size of the intersection array
    return arr3;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};
    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    int s2 = sizeof(arr2) / sizeof(arr2[0]);

    int s3;  // To store the size of the intersection array
    int* arr3 = intersection(arr1, arr2, s1, s2, s3);

    for (int i = 0; i < s3; i++) {
        cout << arr3[i] << " ";
    }

    delete[] arr3;  // Free dynamically allocated memory
    return 0;
}
 