#include<iostream>
using namespace std;
int main ()
{    int m[3][3],k,i,flag=1;
    cout<<"ENTER A 3*3 MATRIX : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m[i][j];
        }
    }

cout<<"ENTER KEY : "<<endl;
cin>>k;
for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {   if(m[i][j]==k)
        {
             cout<<i<<" "<<j<<endl;
             flag--;
        }
        }
    }
if(flag)
{
    cout<<"NOT FOUND";
}
return 0;
}
