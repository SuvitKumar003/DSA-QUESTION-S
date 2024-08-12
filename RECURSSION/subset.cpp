#include<iostream>
using namespace std;

void print_subset(string s, string curr, int i) {
    if (i == s.length()) {
        cout << curr <<"  ";
        return;
    }
    print_subset(s, curr, i + 1);
    print_subset(s, curr + s[i], i + 1);
}

int main() {
    cout << "Enter the string for generating the subsets: " << endl;
    string s;
    cin >> s;
    print_subset(s, "", 0);
    return 0;
}