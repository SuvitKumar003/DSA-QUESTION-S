#include<iostream>
using namespace std;

bool Prime_number(int a)
{
    if (a <= 1) return false;
    if (a <= 3) return true;
    if (a % 2 == 0 || a % 3 == 0) return false;
    for (int i = 5; i * i <= a; i += 6)
    {
        if (a % i == 0 || a % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "Enter the number: " << endl;
    int x;
    cin >> x;
    cout << "The result of this number being prime is " << Prime_number(x) << endl;
    return 0;
}
