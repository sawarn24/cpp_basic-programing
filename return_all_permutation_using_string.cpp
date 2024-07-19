#include<iostream>
#include<string>
using namespace std;
int permutation (string str,string ans);
int main ()
{   string str,ans;
    cout<<"ENTER A STRING : ";
    getline(cin,str);
    permutation(str,ans);
    return 0;

}
int permutation (string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;;
        return 0;
    }
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        string rest=str.substr(0,i)+str.substr(i+1);
        permutation(rest,ans+ch);
    }
}
