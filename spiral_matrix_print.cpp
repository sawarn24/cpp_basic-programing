#include<iostream>
using namespace std;
int main ()
{   int c,r;
     cout<<"ENTER THE ROW NO : "<<endl;
     cin>>r;
     cout<<"ENTER THE COLOUMN : "<<endl;
     cin>>c;
     int m[r][c];
    cout<<"ENTER MATRIX : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>m[i][j];
        }
    }
    int row_s=0,row_e=r-1,colm_s=0,colm_e=c-1;
    while(row_s<=row_e && colm_s<=colm_e)
    {
        for( int col=colm_s;col<=colm_e;col++)
        {
            cout<<m[row_s][col]<<" ";
        }
        row_s++;
        for( int row=row_s;row<=row_e;row++)
        {
            cout<<m[row][colm_e]<<" ";
        }
        colm_e--;
        for( int col=colm_e;col>=colm_s;col--)
        {
            cout<<m[row_e][col]<<" ";
        }
        row_e--;
        for( int row=row_e;row>=row_s;row--)
        {
            cout<<m[row][colm_s]<<" ";
        }
        colm_s++;
    }
    return 0;
}
