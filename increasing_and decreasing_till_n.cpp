#include<iostream>
using namespace std;
int incr(int a,int n);
int decr (int b,int n);
int main()
{   int n,a=1,b=1;
    cout<<"ENTER A NUM : " ;
    cin>>n;
    cout<<"INCREASING : "<<incr(a,n);
    cout<<endl;
    cout<<"DECREASING : "<<decr(b,n);
    return 0;
}
int incr( int a,int n)
 {  if(n==1)
       return a;
       cout<<a;
     incr(a+1,n-1);

 }
int decr (int b,int n)
 {  if(n==1)
       return b;
       cout<<b;
     decr(b-1,n-1);

 }
