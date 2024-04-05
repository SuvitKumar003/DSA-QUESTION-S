#include <iostream>
using namespace std;

void check(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = res ^ arr[i];
    }
    cout << res;
    if (res == 0) {
        cout << "No odd occurring element";
    } else {
        cout << "Odd occurring element is " << res;
    }
}

int main() {
    int n1;
    cout << "Enter the size of the array" << endl;
    cin >> n1;
    int arr[n1] = {0}; // Optional initialization
    for (int i = 0; i < n1; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    check(arr, n1);

    return 0;
}
