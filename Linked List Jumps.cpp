/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* ss(LLNode* res,int x)
{
    LLNode* temp=res;
    while(temp!=NULL and x>0)
    {
        x--;
        temp=temp->next;
    }
    return temp;
}

LLNode* solve(LLNode* node) {
    LLNode* res=node;
    if(res==NULL)
    return node;

    while(res!=NULL)
    {
res->next=ss(res,res->val);

        res=res->next;
    }
   return node; 
}
