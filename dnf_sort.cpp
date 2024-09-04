//it only sorts 0 1 2
#include<iostream>
using namespace std;
void dnf_sort(int arr[])
{
    int low=0;
    int mid=0;
    int high=6;
    int temp;
    while(mid<=high)
    {
        if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==0)
        {
           temp=arr[mid];
           arr[mid]=arr[low];
           arr[low]=temp;
            low++;
            mid++;
        }
        else 
        {
            temp=arr[mid];
           arr[mid]=arr[high];
           arr[high]=temp;
            
            high--;
        }
    }
}
int main()
{
    int arr[7];
    cout<<"ENTER 7 ELEMENTS: ";
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
     cout<<"ARRAY BEFORE SORTING : ";
    for(int i=0;i<7;i++)
    {
        cout<<arr[i];
    }
    dnf_sort(arr);
    
     cout<<"ARRAY AFTER SORTING : ";
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}