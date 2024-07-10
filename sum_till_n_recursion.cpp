#include<iostream>
using namespace std;
int sum(int n);
int main()
{
    int n;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    cout<<sum(n);
}
int sum(int n)
{   if(n==1)
     {
         return n;
     }

    return n+sum(n-1);
}
