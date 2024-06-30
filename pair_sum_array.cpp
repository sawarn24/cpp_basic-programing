#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"ENTER THE SIZE OF ARRAY : "<<endl;
    cin>>n;
    cout<<"ENTER THE KEY : "<<endl;
    cin>>k;
    cout<<"ENTER THE ARRAY : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];


    }
    int st=0;
    int en=n-1;
   while(st<en)
   {
       if(arr[st]+arr[en]==k)
       {
           cout<<st<<" " <<en;
           break;
       }
       else if(arr[st]+arr[en]<k)
              st++;
       else if(arr[st]+arr[en]>k)
              en--;
   }
   return 0;
}

