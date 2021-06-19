/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

void sumTree(Tree* root)
{
    if(root==NULL)
    return;

    sumTree(root->left);
    sumTree(root->right);

    if(root->left!=NULL)
    root->val+=root->left->val;

    if(root->right!=NULL)
    root->val+=root->right->val;

}

Tree* solve(Tree* root) {
    sumTree(root);
    return root;
}
