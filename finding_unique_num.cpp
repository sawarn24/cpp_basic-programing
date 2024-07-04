#include<iostream>
using namespace std;
int main()
{   int n=5;
    int arr[n];
    cout<<"ENTER ARRAY : ";
    for(int i=0;i<n;i++)
         cin>>arr[i];
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
     xorsum=xorsum^arr[i];

    }
    cout<<xorsum;
    return 0;
}

