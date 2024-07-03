#include<iostream>
using namespace std;
int main()
{
    int num,n;
    cout<<"ENTER NUMBER : ";
    cin>>num;
    cout<<"ENTER POSITION : ";
    cin>>n;

       cout<<(num&(~(1<<n)));
    return 0;
}

