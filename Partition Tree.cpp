/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void ss(Tree* root, int &c,int &h)
{
    if(root==NULL)
    return ;
    if(root->left==NULL&&root->right==NULL)
    c++;
    h++;
    ss(root->left,c,h);
    ss(root->right,c,h);
}


vector<int> solve(Tree* root) {
    int c=0,h=0;
    ss(root,c,h);
    vector<int> res{c,h-c};
    return res;
}
