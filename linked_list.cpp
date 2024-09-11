#include<iostream>
using namespace std;
class node
{                                 // making a class
    public:
    int data;
    node* next;

    node(int data1,node*next1)     //creating a constructor
    {
        data=data1;
        next=next1;
    }
    node(int data1)             //creating a another constructor which deals when only data is given
    {
        data=data1;
        next=nullptr;
    }

};

int main()
{
   node* y= new node(2);      // creating a node
   //cout<<y->next;             // here y next conataining null ptr thats why it is printing 0
   int arr[]={3,2,8,5,0};
   node* x= new node(5);
   y->next=x;
  // cout<<y->next;             // here y next pointing to x thats why it is printing x address
   node* head=y;
   node* temp=head;
   while(temp)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }

}