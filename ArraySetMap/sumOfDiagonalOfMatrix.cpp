/**Find the sum of diagonal in matrix */
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int m=3;
    int n=3;
    vector<vector<int>> matrix(n,vector<int>(m,0));
    cout<<"Enter the matrix element"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"Your matrix is"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int l=0;
    int r=2;
    int leftDiagonalSum=0;
    int rightDiagonalSum=0;
    for(int i=0;i<3;i++)
    {
        leftDiagonalSum+=matrix[i][l];
        l++;
        rightDiagonalSum+=matrix[i][r];
        r--;
    }
    cout<<"Sum Of right Diagonal is "<<rightDiagonalSum<<endl;
    cout<<"Sum Of left Diagonal is  "<<leftDiagonalSum<<endl;
}