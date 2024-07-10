#include<iostream>
using namespace std;
int power(int n,int p);
int sum(int n);
int main()
{
    int n,p;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    cout<<"ENTER THE POWER : ";
    cin>>p;
    cout<<power(n,p);
    return 0;
}
int power(int n,int p)
{   if(p==1)
       return n;
    int result;
    result=n*power(n,p-1);
    return result;
}
