#include<iostream>
using namespace std;
void merge (int arr[],int l,int m,int r,int n)
{
    int i=l;
    int j=m+1;
    int k=l;

    int temp[n];

    while(i<=m && j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;

        }
    }
        while(i<=m)
        {
             temp[k]=arr[i];
            i++;
            k++;
        }
        while(j<=r)
        {
             temp[k]=arr[j];
            j++;
            k++;
        }
        for(int i=l;i<=r;i++)
        {
            arr[i]=temp[i];
        }
}


void mergesort(int arr[],int l,int r,int n)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid,n);
        mergesort(arr,mid+1,r,n);

        merge(arr,l,mid,r,n);
    }
}
int main()
{   int n;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    
    cout<<"ENTER TEH ARRAY: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ARRAY BEFORE SORTING: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    mergesort(arr,0,n-1,n);
    cout<<"ARRAY AFTER SORTING: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }


    
}