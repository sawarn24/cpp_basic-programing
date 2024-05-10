#include<iostream>
using namespace std;
int main ()
{
int a,b,c;
     cout<<"Enter three numbers : ";
cin>>a>>b>>c;
if(a>b)
{ if(a>c)
    cout<<"LARGEST NUM IS :" <<a;
   else
    cout<<"LARGEST NUM IS :" <<c;
}
 else
{
 if(b>c)
 cout<<"LARGEST NUM IS :" <<b;
 else
 cout<<"LARGEST NUM IS : "<<c;
 return 0;
}
}
