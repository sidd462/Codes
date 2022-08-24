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
int length_recursive(node*head)
{if(head==NULL)
    return 0;
return length_recursive(head->next)+1;

}
void insert_recursive()
{
    

}
node *midPoint(node *head)
{
    if(head==NULL)
        return head;
node * slow=head;
node * fast=head->next;//!node * fast=head; to get right mid point;;   node * fast=head->next to get left mid point
    
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=(fast->next)->next;
    }
    return slow;
        
}
node *mergeTwoSortedLinkedLists(node *head1, node *head2)
{    node * ans=NULL;

      if(head1==NULL)
          return head2;
    else if(head2==NULL)
        return head1;
    if(head1->data<=head2->data)
    {
        ans=head1;
        ans->next=mergeTwoSortedLinkedLists(head1->next,head2);
    }
    else{
        ans=head2;
        ans->next=mergeTwoSortedLinkedLists(head1,head2->next);
    }
		return ans;
}
node *mergeSort(node *head)
{if(head==NULL or head->next==NULL)
    return head;
 node*mid=midPoint(head);
node*a=head;
node * b=mid->next;
 mid->next=NULL;

a=mergeSort(a);
b=mergeSort(b);
 return (mergeTwoSortedLinkedLists(a,b));
}
node* reverse_recursion_best(node* head)//1->2->3->4->5->NULL
{if(head==NULL or head->next==NULL)
    return head;
    node * small=reverse_recursion_best(head->next);//5->4->3->2->NULL  //!hear head->next is 2 
    node * tail =head->next;//!so tail is point to 2
    tail->next=head;//! is point to 1 so tail->next is pointint to 1 so== 5->4->3->2->1->....................
    head->next=NULL;//!  5->4->3->2->1->NULL
    
    return small;

}


int main(){
}
/*SIDD462
*/