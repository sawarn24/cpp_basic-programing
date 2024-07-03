#include<iostream>
using namespace std;
int main()
{
    int num,n,value;
    cout<<"ENTER NUMBER : ";
    cin>>num;
    cout<<"ENTER POSITION : ";
    cin>>n;
    cout<<"ENTER VALUE : ";
    cin>>value;
    cout<<((num&(~(1<<n)))|value<<n);

    return 0;
}

