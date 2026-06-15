/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head)
{
    if (head == NULL || head->next == NULL)
    {
        free(head);
        return NULL;
    }
        int count=0;
        struct ListNode* temp = head;
        while(temp->next!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int mid=(count + 1) / 2 + 1;
       
        struct ListNode* temp1 = head;
        struct ListNode* temp2 = head;
        count=1;
        while(temp2->next!=NULL && count!=mid)
        {
            temp1=temp2;
            temp2=temp2->next;
            count++;
        }
        temp1->next = temp2->next;
        free(temp2);

        return head;
}
