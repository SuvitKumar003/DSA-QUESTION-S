#include<iostream>
using namespace std;

int power_return(int a, int n)
{
    if(n == 0)
    {
        return 1;
    }
    /*if(n == 1)
    {
        return a;
    }*/
    int temp = power_return(a, n / 2);
    temp = temp * temp;
    if(n % 2 == 0)
    {
        return temp;
    }
    else
    {
        return temp * a;
    }
}

int main()
{
    int x;
    cout << "Enter the exponent for calculating the power of 5: " << endl;
    cin >> x;
    cout << "The result is " << power_return(5, x) << endl;
    return 0;
}
