// C++ program to find largest subarray 
// with equal number of 0's and 1's.
#include <bits/stdc++.h>
using namespace std;

// Returns largest common subarray with equal 
// number of 0s and 1s in both a and b.
int longestCommonSum(vector<bool>& a, vector<bool>& b) {
  
    // Find difference between the two
    int n = a.size();
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = a[i] - b[i];
    
    // Creates an empty hashMap m
    unordered_map<int, int> m;

    int sum = 0;     // Initialize sum of elements
    int max_len = 0; // Initialize result

    // Traverse through the given array
    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // To handle sum=0 at last index
        if (sum == 0)
            max_len = i + 1;

        // If this sum is seen before, 
        // then update max_len if required
        if (m.find(sum) != m.end())
            max_len = max(max_len, i - m[sum]);
      
        else 
            m[sum] = i;
    }

    return max_len;
}

int main() {
    vector<bool> a = {0, 1, 0, 1, 1, 1, 1};
    vector<bool> b = {1, 1, 1, 1, 1, 0, 1};
    cout << longestCommonSum(a, b);
    return 0;
}