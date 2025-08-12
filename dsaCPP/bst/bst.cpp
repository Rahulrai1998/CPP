Tree *insertNode(Tree *root, in data)
{
    if (root == NULL)
    {
        Tree *temp = new Tree(data);
        return temp;
    }

    if (root->val < data)
    {
        root->right = insertNode(root->right, data);
    }
    else
    {
        root->left = insertNode(root->left, data);
    }
    return root;
}