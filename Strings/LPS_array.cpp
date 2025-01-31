#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to calculate the LPS value for the prefix ending at 'n'
int LPS_array(string s, int n) {
    for (int len = n; len > 0; len--) { // Length of the prefix-suffix
        bool flag = true;
        for (int i = 0; i < len; i++) { // Check each character
            if (s[i] != s[n - len + i]) {
                flag = false; // Mismatch found
                break; // Stop checking this length
            }
        }
        if (flag) {
            return len; // Return the length of the longest prefix-suffix
        }
    }
    return 0; // No prefix-suffix match found
}

// Function to calculate the LPS array for the entire string
vector<int> LPS_array(string s) {
    vector<int> lps(s.length());
    for (int i = 0; i < s.length(); i++) {
        lps[i] = LPS_array(s, i + 1); // Pass the prefix length to the helper function
    }
    return lps; // Return the LPS array
}

int main() {
    string s = "abacabad";
    vector<int> lps = LPS_array(s);
    for (int i : lps) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
