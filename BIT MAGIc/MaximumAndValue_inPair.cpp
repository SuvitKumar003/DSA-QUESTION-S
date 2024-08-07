#include <iostream>
using namespace std;

int check_pattern(int pattern, int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if((pattern & arr[i]) == pattern) {
            count++;
        }
    }
    return count;
}

int maxAnd(int arr[], int size) {
    int count = 0;
    int res = 0;
    for(int i = 31; i >= 0; i--) {
        int temp = res | (1 << i);
        count = check_pattern(temp, arr, size);
        if(count >= 2) {
            res |= (1 << i);
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = maxAnd(arr, n);
    cout << "Maximum AND value is: " << result << endl;
    return 0;
}
