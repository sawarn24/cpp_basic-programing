#include<iostream>
using namespace std;
int main ()
{   int c1,r1,c2,r2;
     cout<<"ENTER THE ROW NO : "<<endl;
     cin>>r1;
     cout<<"ENTER THE COLOUMN : "<<endl;
     cin>>c1;
     int m1[r1][c1];
    cout<<"ENTER MATRIX : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"ENTER THE ROW NO : "<<endl;
     cin>>r2;
     cout<<"ENTER THE COLOUMN : "<<endl;
     cin>>c2;
     int m2[r2][c2];
    cout<<"ENTER SECOND MATRIX : "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>m2[i][j];
        }
    }
    int r[r1][c2]={0};
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        { r[i][j]=0;
            for(int k=0;k<c1;k++)
        {
            r[i][j]+=m1[i][k]*m2[k][j];
        }

        }
    }
   for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<r[i][j];
        }
        cout<<endl;
    }
    return 0;
}

