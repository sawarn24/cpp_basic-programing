#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY : "<<endl;
    cin>>n;
    cout<<"ENTER THE ARRAY : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];


    }
    int currsum[n+1];
    currsum[0]=0;
    for(int i =1;i<=n;i++)
    {
        currsum[i]= currsum[i-1]+arr[i-1];
    }
    int maxsum=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            sum =currsum[i]-currsum[j];
            maxsum=max(maxsum,sum);
        }


    }
    cout<<maxsum;
}
