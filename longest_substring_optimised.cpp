#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int longest_substring(string s) {
    int length = 0;
    int visited[256]; 
    fill(begin(visited), end(visited), -1); // Initialize all to -1
    int l = 0, r = 0;

    while (r < s.length()) {
        if (visited[s[r]] != -1) {
            if (visited[s[r]] >= l) {
                l = visited[s[r]] + 1;
            }
        }
        visited[s[r]] = r;
        length = max(length, r - l + 1); // Ensure max length is updated correctly
        r++;
    }
    return length;
}

int main() {
    string s = "abcabcbb";
    cout << longest_substring(s);
    return 0;
}
