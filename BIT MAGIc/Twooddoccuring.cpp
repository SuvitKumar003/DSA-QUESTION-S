#include <iostream>
#include <cmath>

using namespace std;

bool findUniqueNumbers(int a[], int n, int& x, int& y) {
    if (n <= 1) {
        return false; // Not enough elements for two unique numbers
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        res ^= a[i];
    }

    // Find the rightmost set bit
    int rightmostSetBit = res & (-res);

    // Initialize x and y to 0
    x = 0;
    y = 0;

    for (int i = 0; i < n; i++) {
        // Group elements based on rightmost set bit
        if (a[i] & rightmostSetBit) {
            x ^= a[i];
        } else {
            y ^= a[i];
        }
    }

    return true; // Success
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x, y;
    if (findUniqueNumbers(a, n, x, y)) {
        cout << "The two unique numbers are: " << x << " and " << y << endl;
    } else {
        cout << "Error: Not enough elements for two unique numbers." << endl;
    }

    return 0;
}
