#include<iostream>
using namespace std;
int main()
{
    int num,n;
    cout<<"ENTER NUMBER : ";
    cin>>num;
    if((num&(num-1))==0)
        cout<<"yes "<<num<<" is power of 2";
    else
        cout<<"no";
    return 0;
}

