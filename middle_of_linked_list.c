
struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode *temp = head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }    
    int mid = (count/2) + 1 ;
    int c=1;
    temp = head;
    while(temp!=NULL && c!=mid)
    {
        c++;
        temp=temp->next;
    } 
    return temp;
}
