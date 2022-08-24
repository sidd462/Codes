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
int main(){
    cout<<"Enter the data for link list for ending input press -1"<<endl;
   node* head= takeInput();
   print(head);
}
/*SIDD462
*/