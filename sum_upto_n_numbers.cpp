#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
cout<<"ENTER THE LIMIT"<<endl;
cin>>n;
for(int i=0;i<=n;i++)
{
 sum+=i;
}
cout<<"SUM OF O TO "<<n<<"IS :"<<sum<<endl;
return 0;
}
