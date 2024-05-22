#include<iostream>
using namespace std;
int main ()
{   int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {

            for(int k=1;k<=n-i;k++)
                cout<<" ";

            for(int m=1;m<=2*i-1;m++)
                cout<<"*";

        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {

            for(int k=1;k<=n-i;k++)
                cout<<" ";

            for(int m=1;m<=2*i-1;m++)
                cout<<"*";

        cout<<endl;
    }
return 0;
}
