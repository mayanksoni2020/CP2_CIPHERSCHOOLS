class Solution {
public:
    bool isPalindrome(ListNode* head) {
        return recursion(head, head);
    }
    bool recursion(ListNode*& front, ListNode* back) {
        if(back == NULL) return true;
        
        bool isPal = (recursion(front, back->next) & back->val == front->val);
        
        front = front->next;
        return isPal;
    }
};
