class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
     if(head==NULL)
     {
         return head;
     }
        
        ListNode* ptr = head;
        ListNode* prev = head;
        while(ptr && ptr->next)
        {
            ListNode* temp = ptr->next;
            ListNode* next = (ptr->next->next);
            ptr->next = ptr->next->next;
            temp->next = ptr;
          
            if(prev==head)
            {
                head = temp;
                prev = ptr;
            }
            else
            {
                prev->next = temp;
                prev = ptr;
            }
           
           ptr = next;
            
             
        }
        return head;
    }
};
