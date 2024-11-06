#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> sum_of_matrix(vector<vector<int> > &A, vector<vector<int> > &B) {
    int a1=A.size();
        int a2=A[0].size();
        vector<vector<int>> res(a1,vector<int>(a2,0));
        for(int i=0;i<a1;i++)
        {
            for(int j=0;j<a2;j++)
            {
                res[i][j]=A[i][j]+B[i][j];
            }
        }
        return res;
}
int main()
{
    vector<vector<int>> A={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> B={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans=sum_of_matrix(A,B);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}