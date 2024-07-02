#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string str;
    cout<<"ENTER THE STRING";
    getline(cin,str);
     int freq[26];
     for(int i=0;i<26;i++)
      freq[i]=0;
         for(int j=0;j<str.length();j++)
         {
             freq[str[j]-'a']++;
         }

     char ans='a';
     int maxfreq=0;
     for(int i=0;i<26;i++)
     {
         if(freq[i]>maxfreq)
         {
           maxfreq=freq[i];
           ans = i+'a';
         }




}
cout<<ans<<" "<<maxfreq;
return 0;
}
