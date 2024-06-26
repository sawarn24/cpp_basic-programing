#include<iostream>
using namespace std;
int binary_src(int arr[],int key);
int main ()
{
    int arr[9],key;
    cout<<"ENTER 9 NUMBERS"<<endl;
    for(int i=0;i<9;i++)
    {
        cin>>arr[i];

    }
    cout<<"ENTER KEY : ";
    cin>>key;
    cout<<binary_src(arr,key);
    return 0;
}
int binary_src(int arr[],int key)
{
    int s=0; //starting point
    int e=9; // ending point
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;

        }

    }
    return -1;
}
