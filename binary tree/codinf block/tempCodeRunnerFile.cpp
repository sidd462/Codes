void print(node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);

}