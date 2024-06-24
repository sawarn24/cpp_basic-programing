#include<iostream>
#include<math.h>
using namespace std;
void fibonacci_seq(int num);
int main()
{

    int num;
    cout<<"ENTER ONE  NUMBER : "<<endl;
    cin>>num;
    fibonacci_seq(num);
    return 0;
}
void fibonacci_seq(int num)
{   int t1=0,t2=1,next_term;

    for(int i=2;i<=num;i++)
    {    cout<<t1<<" ";
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
    }

}
