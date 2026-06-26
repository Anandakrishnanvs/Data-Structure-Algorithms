struct ListNode* insertfront(struct ListNode *head1, int n)
{
    struct ListNode *newnode;
    newnode = (struct ListNode*) malloc(sizeof(struct ListNode));
    newnode->val = n;
    if(head1==NULL)
    {
        newnode->next=NULL;
        head1=newnode;
    }
    else
    {
        newnode->next=head1;
        head1=newnode;
    }
    
    return head1;
}
struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *temp = head,*newnode,*head1=NULL;  
    newnode = (struct ListNode*) malloc(sizeof(struct ListNode));
    while(temp!=NULL)
    {
        head1 = insertfront(head1, temp->val);
        temp = temp->next;
    }
    return head1;
}
