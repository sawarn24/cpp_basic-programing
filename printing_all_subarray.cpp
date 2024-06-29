#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY : "<<endl;
    cin>>n;
    cout<<"ENTER THE ARRAY : "<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];


    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<" ";

            }cout<<endl;
        }
    }
    return 0;

}
