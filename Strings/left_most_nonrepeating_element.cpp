#include<iostream>
using namespace std;
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
const int CHAR=256;
int index_leftmost_nonrepeating_element(string s)
{
 /* unordered_map<char,int> count_map;
  for(char ch:s)
  {
    count_map[ch]++;
  }
  for(int i=0;i<s.length();i++)
  {
    if(count_map[s[i]]==1)
    {
      return i;
    }
  }
  return -1;
  */
  int f1[CHAR];
    fill(f1, f1 + CHAR, -1); // Initialize all values to -1

    // First pass: Record the first occurrence or mark as repeated
    for (int i = 0; i < s.length(); i++) {
        if (f1[s[i]] == -1) {
            f1[s[i]] = i; // Store the index of first occurrence
        } else {
            f1[s[i]] = -2; // Mark as repeated
        }
    }

    // Second pass: Find the smallest index of a non-repeating character
    int res = INT_MAX;
    for (int i = 0; i < CHAR; i++) {
        if (f1[i] >= 0) { // Non-repeating character
            res = min(res, f1[i]);
        }
    }

    return (res == INT_MAX) ? -1 : res; // If no non-repeating character, return -1

}
int main()
{
  string s="geeksforgeeks";
  cout<<index_leftmost_nonrepeating_element(s);
  return 0;
}