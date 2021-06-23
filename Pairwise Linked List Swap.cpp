/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    LLNode* a,*b;
    a=b=node;
    if(a==NULL||a->next==NULL)
    return node;
b=b->next;
    while(b!=NULL)
    {

    swap(a->val,b->val);
    

if(b->next!=NULL&&b->next->next!=NULL)
{
    a=a->next->next;
    b=b->next->next;
}
else
break;
    }
    return node;
}
