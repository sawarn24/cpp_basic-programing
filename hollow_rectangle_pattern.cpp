#include<iostream>
using namespace std;
int main ()
{
    int l,w;
cout<<"ENTER THE DIMENSION OF RECTANGLE"<<endl;
cout<<"LENGTH: ";
cin>>l;
cout<<"WIDTH: ";
cin>>w;
for(int i=0;i<l;i++)
{
    for(int j=0;j<w;j++)
    {
        if(i==0||i==l-1)
            cout<<"* ";
        else if(j==0||j==w-1)
            cout<<"* ";
        else
            cout<<"  ";

    }
    cout<<endl;

}
return 0;
}
