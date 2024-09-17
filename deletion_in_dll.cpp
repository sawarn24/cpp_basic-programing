#include<iostream>
#include<vector>
using namespace std;

class node
{                                 // making a class
    public:
    int data;
    node* next;
    node* prev;

    node(int data1,node*next1,node* prev1)     //creating a constructor
    {
        data=data1;
        next=next1;
        prev=prev1;
    }
    node(int data1)             //creating a another constructor which deals when only data is given
    {
        data=data1;
        next=nullptr;
        prev=nullptr;
    }

};
node* convert_to_dll(vector<int>nums)
{
    node* head=new node(nums[0]);
    node* prev=head;
    for(int i = 1;i<nums.size();i++)
    {
      node* temp=new node(nums[i],nullptr,prev);
      prev->next=temp;
      prev=temp;
    }
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
node* delition_at_head(node*head)
{
    node* temp=head;
    head=head->next;
    head->prev=nullptr;
    free(temp);
    return head;
}
node* delition_at_tail(node*head)
{
    node* temp=head;
    node* prev=head;
    while(temp->next)
    {
        
        temp=temp->next;

    }
    prev=temp->prev;
    prev->next=nullptr;
    delete temp;
    return head;
}
node* delition_at_kth_num(node* head,int k)
{
    node* temp=head;
    int cnt=1;
    while(temp->next)
    {
        cnt++;
        temp=temp->next;
        if(cnt==k)
        {
            node* pre=temp->prev;
            pre->next=temp->next;
            temp->next->prev=pre;
            delete temp;
            return head;
        }
        

    }
    return head;
}
int main()
{
    vector<int>nums={5,2,8,3,67,2,6,2,};
    node* head=convert_to_dll(nums);
    print_ll(head);
    head=delition_at_head(head);
    print_ll(head);
    head=delition_at_tail(head);
    print_ll(head);
    int k;
    cout<<"ENTER THE NUMBER OF NODE TO DELETE : ";
    cin>>k;
    head=delition_at_kth_num(head,k);
    print_ll(head);


}

