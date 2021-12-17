int checkSize(Node *head)
{
    int res=0;
    while(head!=NULL)
    {
        res++;
        head=head->next;
    }
    return res;
}

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       int size=checkSize(head);
       if(n>size)
       return -1;
       int count=size-n;
       Node *curr=head;
       for(int i=0;i<count;i++)
       {
           curr=curr->next;
       }
       return curr->data;
}
