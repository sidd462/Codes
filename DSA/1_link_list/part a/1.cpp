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
int main(){
    //!stastically

node n1(1);
node* head=&n1;
node n2(2);
n1.next=&n2;
cout<<head->data<<endl;
cout<<head->next->data;
}
/*SIDD462
*/