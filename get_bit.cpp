#include<iostream>
using namespace std;
int main()
{
    int num,n;
    cout<<"ENTER NUMBER : ";
    cin>>num;
    cout<<"ENTER POSITION : ";
    cin>>n;
    if((num&(1<<n))!=0)
       cout<<"1";
    else
        cout<<"0";
        return 0;
}


