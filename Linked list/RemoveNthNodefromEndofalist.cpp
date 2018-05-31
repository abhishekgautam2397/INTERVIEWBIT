# INTERVIEWBIT
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
   ListNode* cur = A, *prev = A;
        while(B-- > 0) {
            cur = cur->next;
            if (cur == NULL) 
            return A->next;
        }
        
        while (cur->next != NULL) {
            cur = cur->next;
            prev = prev->next;
        }
        prev->next = prev->next->next;
        return A;
}
