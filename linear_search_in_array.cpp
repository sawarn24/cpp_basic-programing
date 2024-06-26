#include<iostream>
using namespace std;
int main ()
{

    int arr[5],k,flag=0;
    cout<<"ENTER 5 NUMBERS : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    cout<<"ENTER KEY : ";
    cin>>k;
    for(int i=0;i<5;i++)
    {
        if(k==arr[i])
           {
            cout<<i;
            flag++;
            break;
           }

    }
    if(flag==0)
    {
        cout<<"KEY NOT PRESENT";
    }


}
