#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>abc;
    abc.push_back(1);
    abc.push_back(5);
    abc.push_back(9);

    // how to iterate it?
    // way 1
    for(int i=0;i<abc.size();i++)
    {
        cout<<abc[i]<<endl;
    }
    // way 2
    vector<int>:: iterator xyz;
    for(xyz =abc.begin();xyz!=abc.end();xyz++)
    {
        cout<<*xyz<<endl;
    }
    // way 3
    for(auto element:abc)
    {
        cout<<element<<endl;
    }
    
}
