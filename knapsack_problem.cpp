#include<iostream>
using namespace std;
int knapsack(int wt[],int v[],int n,int w);
int main()
{   int wt[5],v[5],n=5,w;
    cout<<"TOTAL WEIGHT OF 5 ITEMS : ";
    for(int i=0;i<5;i++)
        cin>>wt[i];
     cout<<"TOTAL VALUE OF 5 ITEMS : ";
    for(int i=0;i<5;i++)
        cin>>v[i];
    cout<<"TOTAL WEIGHT OF SACK : ";
    cin>>w;
    cout<<knapsack(wt,v,n,w);
    return 0;

}
int knapsack (int wt[],int v[],int n,int w)
{
    if(n==0 || w==0 )
    {
        return 0;
    }
    if(wt[n-1]>w)
    {
        return knapsack(wt,v,n-1,w);
    }
    return max((wt,v,n-1,w-wt[n-1]),(knapsack(wt,v,n-1,w)));
}
