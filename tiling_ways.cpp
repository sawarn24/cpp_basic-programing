#include<iostream>
int tiling_ways(int n);
using namespace std;
int main()
{   int n;
    cout<<"ENTER THE VALUE OF N : ";
    cin>>n;
   cout<< tiling_ways(n);
    return 0;
}
int tiling_ways(int n) //it return how many ways are to set tile in 2*n space if tile was 2*1
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return tiling_ways(n-1)+tiling_ways(n-2);
}

