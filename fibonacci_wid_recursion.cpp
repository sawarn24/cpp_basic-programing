#include<iostream>
using namespace std;
void fibo(int first,int second,int n);
int main()
{
    int n;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    int first=0;
    int second=1;
    cout<<"FIBONACCI TERMS UPTO "<<n<<" ARE "<<first<<second;
    fibo(first ,second,n-2);
    return 0;
}
void fibo(int first,int second,int n)
{   if(n!=0)
{
    int next=first+second;
    cout<<next;
    fibo(second,next,n-1);
}
}
