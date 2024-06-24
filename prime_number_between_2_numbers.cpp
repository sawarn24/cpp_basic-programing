#include<iostream>
#include<math.h>
using namespace std;
void prime_check(int num1,int num2);
int main()
{

    int num1,num2;
    cout<<"ENTER TWO NUMBERS : "<<endl;
    cin>>num1>>num2;
    prime_check(num1,num2);
    return 0;
}
void prime_check(int num1,int num2)
{  int flag;
    for(int i=num1;i<=num2;i++)
    { flag=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
             {

              flag=1;
                break;
             }
        }
        if(flag==0)
        {
            cout<<i<<" ";

        }


    }

}
