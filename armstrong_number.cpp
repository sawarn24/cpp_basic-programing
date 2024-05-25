#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int n;
    cout<<"ENTER A NUMBEr : ";
    cin>>n;
    int sum=0;
    int s=n;
    while(s>0)
    {
        int lastdigit;
        lastdigit=s%10;
        sum+=pow(lastdigit,3);
        s=s/10;
    }
    if(sum==n)
        cout<<"ARMSTRONG NUMBER";
    else
        cout<<"NOT A ARMSTRONG NUMBER";
    return 0;
}
