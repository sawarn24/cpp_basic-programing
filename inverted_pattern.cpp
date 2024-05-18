#include<iostream>
using namespace std;
int main ()
{
int n,c;
cout<<"ENTER A NUMBER : ";
cin>>n;
for(int i=n;i>=1;i--)
{  c=0;
    for(int j=1;j<=i;j++)
        {
            c++;
            cout<<c ;

        }
       cout<<endl;
}
return 0;




}
