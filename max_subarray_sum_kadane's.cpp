// kadane's  algo
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
    int sum=0;
    int maxsum=INT_MIN;
    for(int i =0;i<=n;i++)
    { sum+=arr[i];
      if(sum<0)
      {
          sum=0;
      }
      maxsum=max(maxsum,sum);

    }
    cout<<maxsum;
    return 0;
}
