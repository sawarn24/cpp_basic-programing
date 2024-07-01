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
    cout<<"ORIGINAL MATRIX : "<<endl;
    for(int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

