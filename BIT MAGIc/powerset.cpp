#include<iostream>
using namespace std;
void printPowerSet(string str) {
    int n = str.length();
    int number_of_subset=(1<<n);//calculating the number of subsets
   for(int i=0;i<number_of_subset;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(i&(1<<j))
            cout<<str[j];
    }
    cout<<endl;
   }
}
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    printPowerSet(str);
    return 0;
}