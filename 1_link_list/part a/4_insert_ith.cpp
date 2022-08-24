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

int main(){
    node * head= takeInput();
    insert_ith(head,2,4);
    print(head);
    }
/*SIDD462
*/