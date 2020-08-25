class Solution
{
    public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode** list = & head;
        while (*list != NULL)
        {
            if ((*list)->next == NULL)
                return head; 
            else if ((*list)->val == (*list)->next->val)
            {
                int dup = (*list)->val;
                while (*list != NULL && (*list)->val == dup)
                    *list = (*list)->next;
            }
            else
                list = &((*list)->next);
        }
        return head;
    }
};
