#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"ENTER A NUMBER : ";
    cin>>a>>b;
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;


    }
    cout<<a;
    return 0;
}
