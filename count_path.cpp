#include<iostream>
using namespace std;
int countpath(int s,int e);
int main()
{
    int s,e;
    cout<<"ENTER THE STARTING POINT AND ENDING POINT : ";
    cin>>s>>e;
    cout<<countpath(s,e);
    return 0;

}
int countpath(int s,int e)
{
    if(s==e)
    {
        return 1;

    }
    if(s>e)
    {
        return 0;

    }
    int c=0;
    for(int i=1;i<=7;i++)
    {
        c+=countpath(s+i,e);
    }
    return c;
}
