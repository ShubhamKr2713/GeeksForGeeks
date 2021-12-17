class Solution{
  public:
  
  Node * middle(Node *head)
  {
      Node *slow,*fast;
      fast=slow=head;
      while(fast!=NULL && fast->next!=NULL)
      {
          slow=slow->next;
          fast=fast->next->next;
      }
      return slow;
  }
  
  Node * reverse(Node *head)
  {
      Node *curr,*prev,*next;
      curr=head;
      prev=next=NULL;
      
      while(curr!=NULL)
      {
          next=curr->next;
          curr->next=prev;
          
          prev=curr;
          curr=next;
      }
      head=prev;
      return head;
  }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        Node *temp=head;
        //Your code here
        Node *mid=middle(head);
        Node *rev=reverse(mid);
        
        while(rev!=NULL)
        {
            if(rev->data!=temp->data)
            return 0;
            rev=rev->next;
            temp=temp->next;
        }
        return 1;
    }
};
