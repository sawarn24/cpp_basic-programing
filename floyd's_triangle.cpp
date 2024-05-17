#include<iostream>
using namespace std;
int main ()
{
    int n,c=0;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {   c++;
                cout<<c<<" ";
            }
            cout<<endl;

        }
        return 0;

}
