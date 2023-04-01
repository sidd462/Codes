#include <iostream>
using namespace std;
class Node{
public:
    int data;
    
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


Node *removeDuplicates(Node *head)
{Node * temp=head;
 
    if(temp==NULL and temp->next==NULL)
    return NULL;
 
 if(temp->data==(temp->next)->data && temp->next!=NULL)
     temp->next=temp->next->next;
 Node* ans=removeDuplicates(head->next);

 return ans;
}

int main(){

   
}
