#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node * next;

node(int d)
{

    data =d;
    next=NULL;
}
};

void insetathead(node*&head,int a)
{
    if(head==NULL)
    {
        head=new node(a);
    }
    else {node *temp= new node(a);
    temp->next=head;
    head=temp;
    }
}
void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
void insertinmiddle(node *&head, int a,int pos)
{
   node *temp=new node(a);
   node* trav=head;
   for(int i=1;i<pos;i++)
   {
    trav=trav->next;
   }
    temp->next=trav->next;
    trav->next=temp;
    
}
int length(node*head)
{int l=0;
    while(head!=NULL)
    {
        l++;
        head=head->next;
    }
    return l;
}
void insertattail(node*head,int data)
{
    node*tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next= new node(data);//node*temp=new node(data); tail->next=temp;
}
void reverse(node *&head)
{
    node *cur=head;
    node *prev=NULL;
    while(cur!=NULL)
    {
        node * temp=cur->next;
    cur->next=prev;
    prev=cur;
    cur=temp;
    }
   head=prev;
}
void deleteHead(node*&head)//video 4

{
    node * temp;
    temp=head->next;
    delete head;//removing head memery
    head=temp;
}
bool search(node* head,int a)               //linear search               bool recursion_search()   recursion way also present ep05 coding blocks
{while(head!=NULL)
{
    if(head->data==a)
        return true;
    head=head->next;
}
return false;
}
node* user_define_list()
{   int d;
    cin>>d;
    node* head=NULL;
    while(d!=-1)
    {
        //insertathead(head,d);
        if(head==NULL)
        {
            head=new node(d);
        }
        else{
            node*temp=new node(d);
            temp->next=head;
            head=temp;
        }
        cin>>d;
    }
    return head;
}
void operator<<(ostream &os, node* head){

    //operator overloading ep07
print(head);
return ;
}
void operator>>(istream &is, node* head){
    head=user_define_list();
    return ;
}
void middle(node* head)
{
    node* temp=head;
    int l;
    l=length(head);
    if (l%2==0)
    {
        for(int i=1;i<l/2;i++)
    {
        temp=temp->next;

    }
    cout<<temp->data;
    }
}
node* middle_runner_technique(node* head)
{
    node* slow=head;
    node* fast=head->next;

    while(fast->next!=NULL && fast!=NULL)
    {
        fast=fast->next->next;      //hear we can see this as       fast->next->next :: (fast->next)->next
        slow=slow->next;
    }
    return slow;
}
node* kth_node_from_end(node*head,int k)
{
    node*slow=head;
    node*fast=head;
    for(int i=0;i<k;i++)    
    {
        fast=fast->next;
    }
    while(fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }

    return slow;
}
int main()
{   int key;
    node * head= NULL;
  
    insetathead(head,5);
    insetathead(head,1);
    insetathead(head,3);
    insetathead(head,4);
    insertinmiddle(head,9,2);
    insertattail(head,11);
    cout<<"list->  ";
    print(head);
    cout<<"\nreversing the list->\n";
    reverse(head);
    print(head);
    deleteHead(head);
    cout<<"\nDeleting head->\n";
    print(head);
    cout<<endl;
   node* k1= kth_node_from_end(head,2);
   cout<<k1->data<<" is the 2nd last node";
    cout<<"\nEnter a number you want to search->\n";
    cin>>key;
    if(search(head,key)==1)
        {
            cout<<"Found it";
        }
    else
    cout<<key<<" is not in the list";
   
   cout<<endl<<"length of list="<<length(head)<<endl;

cout<<"do you want user define list Y/N\n";
char a;
cin>>a;
if(a=='Y')
{
   node* head_user=user_define_list();
  print(head_user);
 // node *head_user;
  //cin>>head_user;
  // cout<<head_user;
}

}