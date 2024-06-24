#include<iostream>
#include<math.h>
using namespace std;
int facto(int num);
void ncr(int n,int r);
int main()
{ int n,r;
  cout<<"ENTER N AND R : "<<endl;
  cin>>n>>r;
  ncr(n,r);
  return 0;
}
void ncr(int n,int r)
{
    int result=0;
    result=facto(n)/(facto(n-r)*facto(r));
    cout<<result;
}
int facto(int num)
{   if(num<=1)
       return 1;

    return num*facto(num-1);

}
