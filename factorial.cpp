#include<iostream>
using namespace std;
int facto(int n);

int main()
{
    int n,p;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    cout<<facto(n);
    return 0;
}
int facto(int n)
{ if(n==1)
{
    return 1;
}
    return n*facto(n-1);
}
