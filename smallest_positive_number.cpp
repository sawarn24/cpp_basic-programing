#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,j=0;
    cout<<"ENTER THE SIZE OF ARRAY : "<<endl;
    cin>>n;
    cout<<"ENTER THE ARRAY : "<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];


    }
    const int N=1e6+2;
    int chck[N]={0};

    while(j<n)
    {
        if(a[j]>=0)
        {
            chck[a[j]]++;
        }
        j++;
    }
    j=0;
    while (j<N)
    {
        if(chck[j]==0)
        {
            cout<<j;
            break;
        }
        j++;
    }
    return 0;
}
