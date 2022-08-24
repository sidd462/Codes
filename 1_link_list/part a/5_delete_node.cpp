#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;

node(int d)
    {
        data=d;
        next=NULL;
    }
};
void print(node * head)
{
    while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
}
cout<<"NULL";
}
node* takeInput()
{int data;
cin>>data;
node*head=NULL;
node* trav;
while(data!=-1)
{node* temp1=new node(data);
if(head==NULL)
{
    head=temp1;
    trav=head;

} 
else{
    trav->next=temp1;
    trav=trav->next;
}
cin>>data;
}
return head;
}
void insert_ith(node*head,int i,int value)
{
node * curr;
node * fast;
curr=head;
fast=head->next;
for(int j=1;j<i;j++)
{
    curr=curr->next;
    fast=fast->next;
}
node* temp=new node(value);
curr->next=temp;
temp->next=fast;
}
void delete_ith(node*head,int i)
{
    node* prev=head;
    node* fast2=head->next->next;
    for(int j=1;j<i-1;j++)
    {
        prev=prev->next;
        fast2=fast2->next;
    }
    prev->next=fast2;
}
int main(){
    node * head= takeInput();
    print(head);
    cout<<endl;
    delete_ith(head, 2);
    cout<<"deleting 2nd node \n..............................."<<endl;

    print(head);

}
/*SIDD462
*/