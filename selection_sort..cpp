#include<iostream>
void selection_sort(int arr[],int n);
using namespace std;
int main ()
{
    int arr[6],n=6;
    cout<<"ENTER 6 NUMBERS";
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];

    }
    selection_sort(arr,n);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i];

    }
    return 0;
}
void selection_sort(int arr[],int n)
{   int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
               {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
               }
        }

    }

}
