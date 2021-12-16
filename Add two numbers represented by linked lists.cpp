// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    struct Node* reverse(struct Node* head)
    {
        Node *curr=head;
        Node *next,*prev;
        next=prev=NULL;
        
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
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverse(first);
        second=reverse(second);
        int sum=0,carry=0;
        sum=first->data+second->data;
        Node*head=new Node(sum%10);
        carry=sum/10;
        Node *ret=head;
        first=first->next;
        second=second->next;
        while(first!=NULL && second!=NULL)
        {
            sum=first->data+second->data+carry;
            Node *curr=new Node(sum%10);
            carry=sum/10;
            first=first->next;
            second=second->next;
            head->next=curr;
            head=head->next;
        }
        while(first!=NULL)
        {
            sum=first->data+carry;
            Node *curr=new Node(sum%10);
            carry=sum/10;
            first=first->next;
            
            head->next=curr;
            head=head->next;
        }
        while(second!=NULL)
        {
            sum=second->data+carry;
            Node *curr=new Node(sum%10);
            carry=sum/10;
            second=second->next;
            
            head->next=curr;
            head=head->next;
        }
        if(carry!=0)
        {
             Node *curr=new Node(carry);
           
           
            
            head->next=curr;
            head=head->next;
        }
        ret=reverse(ret);
        return ret;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends
