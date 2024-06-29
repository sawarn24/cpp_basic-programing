 #include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n)
{
    int sum=0;
    int maxsum=INT_MIN;
    for(int i =0;i<n;i++)
    { sum+=arr[i];
      if(sum<0)
      {
          sum=0;
      }
      maxsum=max(maxsum,sum);


    }
    return maxsum;
}
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
    int nonwrap=kadane(arr,n);
    int wrap=0;
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrap=totalsum +(kadane(arr,n));
    cout<<max(wrap,nonwrap);
    return 0;
}
