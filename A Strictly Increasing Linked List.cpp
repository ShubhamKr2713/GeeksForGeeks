/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {
    bool res=true;
while(head->next!=NULL)
{
    if(head->val>=head->next->val)
    return false;
    head=head->next;
}


return res;
}
