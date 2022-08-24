#include <bits/stdc++.h>
using namespace std;

class node{

public:
int data;
node* left;
node* right;
node(int x)
{
data=x;
left=NULL;
right=NULL;
}};
node* buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
     node *root=new node(d);
   
    root->left= buildTree();
    root->right= buildTree();
    return root;
}
void printInorder(node* root){
    if(root==NULL)
    return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void printPostorder(node* root){
    if(root==NULL)
    return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}
int main(){
node * root= buildTree();
//8 10 -1 -1 6 9 -1 7 -1 -1 3 -1 14 15 -1 -1 -1
printInorder(root);
cout<<endl;
printPostorder(root);

}


