#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<" ENTER A LINE : ";
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {

        cout<<str[i]-32;
    }
    return 0;


}
