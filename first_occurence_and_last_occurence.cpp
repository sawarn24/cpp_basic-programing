#include<iostream>
using namespace std;
int lastoc(int arr[],int n,int i,int key)

{   if (i==n)
        return -1;
    int restarray=lastoc(arr,n,i+1,key);
    if(restarray!=-1)
        return restarray;
    if(arr[i]==key)
         return i;
    return -1;
}
int firstoc(int arr[],int n,int i,int key)
{
    if (i==n)
        return -1;
    if(arr[i]==key)
        return i;
    return firstoc(arr,n,i+1,key);

}
int main()
{   int n;
    cout<<"ENTER SIZE OF ARRAY : " ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    cout<<"ENTER KEY : ";
    int key;
    cin>>key;
   cout<< firstoc(arr,n,i,key);
   cout<<lastoc(arr,n,i,key);
}
