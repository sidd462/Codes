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
class Pair{
public:
node* head;
node* tail;
};
Pair reverse_recur(node* head)
{if(head==NULL or head->next==NULL)
    {Pair ans;
    ans.head=head;
    ans.tail=head;
    return ans;
    }
    Pair small=reverse_recur(head->next);//5->4->3->2->NULL
    small.tail->next=head;
    head->next=NULL;
    Pair ans;
    ans.head=small.head;
    ans.tail=head;
    return ans;

}
node* reverse_recur_help(node*head)
{
    node * ans=reverse_recur(head).head;
    return ans;
    //return reverse_recur(head).head;
}
int main(){
}
//*SIDD462