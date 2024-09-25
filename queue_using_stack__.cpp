#include<iostream>
#include<stack>
using namespace std;
class queue
{
    public: 
    stack<int>s1,s2;

    pushs(int n)
    {
        while(s1.size())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(n);
        while(s2.size())
        {
            s1.push(s2.top());
            s2.pop();
        }

    }
    pops()
    {
        s1.pop();
    }
    tops()
    {
        cout<<s1.top()<<" ";
    }
    sizes()
    {
        cout<<s1.size()<<" ";
    }
};
int main()
{
    queue abc;
   abc.pushs(9);
   abc.pushs(8);
   abc.pushs(7);
   abc.pushs(6);
   abc.tops();
   abc.pops();
   abc.tops();
   abc.sizes(); 
}