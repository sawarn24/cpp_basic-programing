#include<iostream>
using namespace std;
int main()
{
    int n,mx,flag=0;
    cout<<"ENTER THE NUMBER OF DAYS";
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];


    }
    mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
      if(arr[i]>mx&&arr[i]>arr[i+1])
          flag++;
      mx=max(mx,arr[i]);

    }
    cout<<flag;

}
