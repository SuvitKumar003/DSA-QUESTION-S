#include<iostream>
#include<cmath>
#include<stack>
using namespace std;

int main() {
    string str = "10 2 3 ^ ^";
    stack<int> st;
    int i = 0;

    while (i < str.length()) {
        // Skip spaces
        if (str[i] == ' ') {
            i++;
            continue;
        }

        // If it's a digit, extract the full number
        if (isdigit(str[i])) {
            int num = 0;
            while (i < str.length() && isdigit(str[i])) {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            st.push(num);
        }
        // Otherwise, it's an operator
        else {
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();

            switch (str[i]) {
                case '+': st.push(y + x); break;
                case '-': st.push(y - x); break;
                case '*': st.push(y * x); break;
                case '/': st.push(y / x); break;
                case '%': st.push(y % x); break;
                case '^': st.push(pow(y, x)); break;
            }
            i++; // move past the operator
        }
    }

    cout << st.top() << endl;
    return 0;
}
