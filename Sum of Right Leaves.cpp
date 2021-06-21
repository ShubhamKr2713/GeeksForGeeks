/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void ss(Tree* root, int &res)
{
if(root==NULL)
return;
if(root->right!=NULL&&root->right->right==NULL&&root->right->left==NULL)
res+=root->right->val;
ss(root->left,res);
ss(root->right,res);
}

int solve(Tree* root) {
    int res=0;
    ss(root,res);
    return res;
}
