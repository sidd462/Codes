#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
node(int d){
    data=d;
    left=NULL;
    right=NULL;
}

};

node* create_tree(node* root)
{
 cout<<"enter data"<<endl;
 int data;
 cin>>data;
 root=new node(data);
 if (data==-1)
 return NULL;
 cout<<"enter data for left "<<data<<endl;
 root->left=create_tree(root->left);
 cout<<"enter data for right "<<data<<endl;
 root->right=create_tree(root->right);
    return root;


}
void levelOrderTraversal(node* root)
{
    queue<node*> q;
     q.push(root);
    q.push(NULL);
    while(!q.empty())
    {node* temp=q.front();
    
    q.pop();
    if(temp==NULL)
    {
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<temp->data<<" ";
    if(temp->left)//if(temp->left!=NULL)
    {
        q.push(temp->left);
    }
    if(temp->right)//if(temp->right!=NULL)
    {
        q.push(temp->right);
    }}
    }
}

int main()
{
       node * root=NULL;
    //creating a tree
    root=create_tree(root);

    //1 3 7 -1 -1 11 -1 -1 5 1 -1 -1 -1
cout<<"print levels\n";
    levelOrderTraversal(root);
}