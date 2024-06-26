#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5];
    cout<<"ENTER 5 NUMBERS"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<5;i++)
    {
        maxNo=max(arr[i],maxNo);
        minNo=min(arr[i],minNo);
    }
    cout<<maxNo<<" "<<minNo;

}
