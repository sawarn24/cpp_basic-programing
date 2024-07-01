#include<iostream>
using namespace std;
int main ()
{   int c1,r1,k;
     cout<<"ENTER THE ROW NO : "<<endl;
     cin>>r1;
     cout<<"ENTER THE COLOUMN : "<<endl;
     cin>>c1;
     int m[r1][c1];
    cout<<"ENTER MATRIX : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>m[i][j];
        }
    }
    cout<<"ENTER KEY : "<<endl;
    cin>>k;
    bool flag=false;
    int r=0,c=c1-1;
    while(r<r1 and c>=0)
    {
        if(m[r][c]==k)
        {
            flag=true;
            break;
        }
        else if(m[r][c]<k)
        {
            c--;
        }
        else
            r++;
    }
    if(flag)
        cout<<"found";

    else
        cout<<"not found";
        return 0;
}

