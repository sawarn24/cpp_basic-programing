#include<iostream>
#include<math.h>
using namespace std;
int conv(int num);
int main()
{
    int num,result;
    cout<<"ENTER A BINARY NUMBER";
    cin>>num;
    result=conv(num);
    cout<<result;
    return 0;
}
int conv(int num)
{
    int lastdigit,sum=0;
    for(int i=0;num!=0;i++)
    {
        lastdigit=num%10;
        sum += lastdigit*pow(2,i);
        num=num/10;
    }
    return sum;
}
