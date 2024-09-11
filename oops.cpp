#include<iostream>
using namespace std;
class intro{
    string address;   //private member
    public:
    string name;     //data members
    int age;
    string proffesion;
    string married;

    void setaddress(string s)     //function to use private members from outside
    {
        address=s;
    }

    intro(string s,int a,string p,string m)
    {
        name=s;
        age=a;
        proffesion=p;
        married=m;
    }//constructer
    intro(){
        
    }
    
    void printinfo()
    { cout<<"NAME: "<<name<<endl;
      cout<<"AGE: "<<age<<endl;
      cout<<"PROFESSION: "<<proffesion<<endl;
      cout<<"MARRIED OR NOT: "<<married<<endl;

    }
    

};
int main()
{
    // intro a;
    // a.name="ISHAN";
    // cout<<a.name<<endl;;
    // intro arr[3];
    // for(int i=1;i<=3;i++)
    // {
    //     cout<<"ENTER THE NAME OF PERSON "<<i<<" : ";
    //     cin>>arr[i].name;
    //     cout<<"ENTER THE AGE OF PERSON "<<i<<" : ";
    //     cin>>arr[i].age;
    //     cout<<"ENTER THE PROFESSION OF PERSON "<<i<<" : ";
    //     cin>>arr[i].proffesion;
    //     cout<<"PERSON IS MARRIED OR NOT "<<i<<" : ";
    //     cin>>arr[i].married;

        
    // }
    // for(int i=1;i<=3;i++)
    //     {
    //         arr[i].printinfo();
    //     }

    // intro f;
    // string s;
    // cout<<"ENTER YOUR ADDRESS : ";
    // cin>>s;
    // f.setaddress(s);                //USING PRIVATE MEMBER THROUGH FUNCTION

  intro h("jethalal",48,"bussiness","married");   //setting data through constructor
  h.printinfo();
  
 intro k;
  

}
