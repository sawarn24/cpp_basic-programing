#include<iostream>
using namespace std;
int main ()
{   int n,i=0;
    cout<<"ENTER THE SIZE OF LINE : ";
    cin>>n;
    cin.ignore();
    char s[n+1];
    cout<<"ENTER line "<<endl;
    cin.getline(s,n+1);
    cin.ignore();
    int maxleng=0,currlen=0,maxst=0,st=0;
    while(1)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            if(currlen>maxleng)
            {
                maxleng=currlen;
                maxst=st;

            }
            currlen=0;
            st=i+1;
        }
        else
        currlen++;

        if(s[i]=='\0')
        break;
        i++;

    }
    for(int i=0;i<maxleng;i++)
    {
        cout<<s[i+maxst];
    }
    return 0;
}

