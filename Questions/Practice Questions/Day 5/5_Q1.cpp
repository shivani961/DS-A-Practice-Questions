#include<iostream>
#include<vector>
#include<set>
using namespace std;

 vector<vector<int> > transpose(vector<vector<int> >& matrix)
 {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int> > res(cols, vector<int>(rows));
        for (int i = 0; i < rows; ++ i) {
            for (int j = 0; j < cols; ++ j) {
                res[j][i] = matrix[i][j];
            }
        }
        return res;
}

int main()
{
    vector<vector<int> > matrix;
    int m,n,val=0;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        vector<int> a;
        for(int j=0;j<n;j++)
        {
            cin>>val;
            a.push_back(val);
        }
        matrix.push_back(a);
    }
    matrix= transpose(matrix);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
