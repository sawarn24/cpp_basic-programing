#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    int spf[n];//smallest prime factor
    for(int i=0;i<=n;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }


while(n!=1)
{
    cout<<spf[n]<<" ";
    n=n/spf[n];

}
return 0;
}
