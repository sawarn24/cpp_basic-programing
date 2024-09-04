#include<iostream>
using namespace std;
void count_sort(int arr[],int n)
{
    int sum=0, max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int* arr_count = new int[max + 1]();
    for(int i=0;i<n;i++)
    {
          arr_count[arr[i]]++;
    }
    for(int i=1;i<=max;i++)
    {
        arr_count[i] +=arr_count[i-1];
    }
    int* result_arr = new int[n];
    for(int i=n-1;i>=0;i--)
    {
        result_arr[arr_count[arr[i]]-1]=arr[i];
        arr_count[arr[i]]--;

    }
    for (int i = 0; i < n; i++) {
        arr[i] = result_arr[i];
    }
    delete[]arr_count;
    delete[]result_arr;

}
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY: ";
    cin>>n;
    int arr[n];
    
    cout<<"ENTER THE ELEMENTS : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ARRAY BEFORE SORTING : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    count_sort(arr,n);
    cout<<" "<<sizeof(arr)<<endl;;
     cout<<"ARRAY AFTER SORTING : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



}