#include <iostream>
#include <string>
using namespace std;

void rotate(string s1, string s2) {
    if (s1.length() != s2.length()) {
        cout << "No";
        return;
    }

    int i = 0;
    // Find the first matching character in s1 that matches the first character of s2
    for (; i < s1.length(); i++) {
        if (s2[0] == s1[i]) {
            break;
        }
    }

    // If no such character is found, s2 cannot be a rotation of s1
    if (i == s1.length()) {
        cout << "No";
        return;
    }

    int j = 0;  // Index for s2
    int temp = i;  // Remember the starting point in s1

    do {
        // Check if characters match
        if (s1[i] != s2[j]) {
            cout << "No";
            return;
        }
        i = (i + 1) % s1.length();  // Wrap around s1 circularly
        j++;
    } while (j < s2.length());

    cout << "Yes";
}

int main() {
    string s1 = "ABCD";
    string s2 = "CABD";
    rotate(s1, s2);
    return 0;
}
