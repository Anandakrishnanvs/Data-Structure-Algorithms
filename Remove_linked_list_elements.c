/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) 
{
    struct ListNode *temp1=head , *temp2 =head;
    while(temp2!=NULL)
    {
        if(head->val==val)
        {
            head=head->next;
            temp2=head;
            temp1=head;
        }
        else if(temp2->val==val)
        {
            temp1->next=temp2->next;
            temp2 = temp2->next;
        }
        else
        {
            temp1=temp2;
            temp2=temp2->next;
            
        }
        
    }
   
    return head;
}
