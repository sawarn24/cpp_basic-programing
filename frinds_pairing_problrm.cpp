#include<iostream>
using namespace std;
int pairing_ways(int n);
int main()
{   int n;
    cout<<"TOTAL NUMBER OF FRIENDS : ";
    cin>>n;
    cout<<pairing_ways(n);
    return 0;

}
int pairing_ways( int n)
{
    if(n==0 ||n==1||n==2)
    {
        return n;
    }
    return pairing_ways(n-1)+pairing_ways(n-2)*(n-1);
}
