#include <iostream>
#include <vector>
using namespace std;

string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void print_combinations(string input, string output, int index) {
    // Base case: if the current index is equal to the length of the input string, print the output string
    if (index == input.length()) {
        cout << output << " ";
        return;
    }
    
    // Get the current digit from the input string and find the corresponding characters from the keypad array
    int digit = input[index] - '0';
    string letters = keypad[digit];
    
    // Iterate through the letters corresponding to the current digit
    for (int i = 0; i < letters.length(); i++) {
        // Recursive call to process the next digit with the current letter appended to the output string
        print_combinations(input, output + letters[i], index + 1);
    }
}

int main() {
    string input = "23"; // Example input
    string output = "";
    print_combinations(input, output, 0);
    return 0;
}
