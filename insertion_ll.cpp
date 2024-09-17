#include<iostream>
#include<vector>
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
node* conv_to_ll(vector<int> &arr)
{
node* head=new node(arr[0]);
node* mover=head;
for(int i=1;i<arr.size();i++)
{
    node* temp=new node(arr[i]);
    mover->next=temp;
    mover=temp;

}
return head;

}
node* insertion_at_head(node* head,int x)
{
    node* temp=new node(x,head);
    return temp;
}
node* insertion_at_tail(node* head,int y)
{
    node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=new node(y);
    return head;
}
void print_ll(node* head){
 node* temp=head;
   while(temp)            //traversing a ll
   {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}
node* insertion_at_specific_num(node* head,int k,int val)
{
    if(k==1)
    {
       head=insertion_at_head(head,val);
       return head; 
    }
    int z=1;
    node* temp=head;
    while(temp->next!=nullptr)
    {
        z++;
        if(k==z)
        {
            temp->next=new node(val,temp->next->next);
            return head;
        }
        temp=temp->next;

    }
    return head;
    }
    node* insertion_before_a_value(node* head,int num,int valu)
{
     node* temp=head;
    while(temp->next!=nullptr)
    {
        
        if(temp->next->data==valu)
        {
           node* new_node = new node(num, temp->next);  // Insert new node before temp->next
            temp->next = new_node;
            break;
        }
        temp=temp->next;

    }
    return head;
    }
int main()
{
    vector <int> arr={4,6,2,8,1,0,3};
    node* head=conv_to_ll(arr);
    print_ll(head);
    int x,y,val,k,num,valu;
    cout<<"ENTER A NUMBER YOU WANT TO ADD AT: ";
    cin>>x;
    head=insertion_at_head(head,x);
    print_ll(head);
    cout<<"ENTER A NUMBER YOU WANT TO ADD AT TAIL : ";
    cin>>y;
    head=insertion_at_tail(head,y);
    print_ll(head);
    cout<<"ENTER A NUMBER AND POSITION AT YOU WANT TO ADD: ";
    cin>>val>>k;
    head=insertion_at_specific_num(head,k,val);
    print_ll(head);
     cout<<"ENTER A NUMBER AND VALUE BEFORE YOU WANT TO ADD: ";
    cin>>num>>valu;
    head=insertion_before_a_value( head, num,valu);
    print_ll(head);

}




