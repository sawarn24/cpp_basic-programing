#include<iostream>
using namespace std;
bool sorted(int arr[],int n);
int main()
{   int n;
    cout<<"ENTER SIZE OF ARRAY : " ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sorted(arr,n);
    return 0;

}
bool sorted(int arr[],int n)
{
    if(n==1)
        return 1;
    bool restarray=sorted(arr+1,n-1);
    return arr[0]<arr[1]&&restarray;
}
