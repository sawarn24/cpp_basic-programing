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
node* deletion_at_head(node* head)   //deleting a first node 
{
    node* temp=head;        
    head=head->next;
    delete temp;
    return head;
}
node* deletion_at_tail(node* head)
{
    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
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
node* delete_a_spe_node(node* head,int n)
{
    if (n==1)
    {
        head=deletion_at_head( head);
        return head;
    }
    int cnt=0;node* temp=head;node* prev=nullptr;
    while(temp)
    {
        cnt++;
        if(cnt==n)
        {
         prev->next=prev->next->next;
         free(temp);
         break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}
node* delete_a_node_wid_value(node* head,int n)
{
    
    node* temp=head;node* prev=nullptr;
    while(temp)
    {
        
        if(temp->data==n)
        {
         prev->next=prev->next->next;
         free(temp);
         break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}
int main()
{
    vector <int> arr={4,6,2,8,1,0,3};
    node* head=conv_to_ll(arr);
    print_ll(head);
    head=deletion_at_head(head);
    print_ll(head);
    head=deletion_at_tail(head);
    print_ll(head);
    int n,j;
    cout<<"ENTER THE NUMBER OF NODE YOU WANT TO DELETE ";
    cin>>n;
    head=delete_a_spe_node(head,n);
    print_ll(head);
    cout<<"ENTER THE VALUE OF NODE YOU WANT TO DELETE ";
    cin>>j;
    head=delete_a_node_wid_value(head,j);
    print_ll(head);
    
    

    
    



}