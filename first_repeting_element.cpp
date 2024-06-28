#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];


    }
    int miniidx=INT_MAX;
    const  int N =1e6+2;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;

    }
    for(int i=0;i<n;i++)
    {  if(idx[a[i]] !=-1)
        miniidx=min(miniidx,idx[a[i]]);
       else
         idx[a[i]]=i;
    }
    cout<<miniidx;
}
