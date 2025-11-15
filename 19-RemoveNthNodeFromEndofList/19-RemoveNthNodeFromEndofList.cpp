// Last updated: 11/15/2025, 10:43:41 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr){
            ListNode* next = curr ->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;

    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prime = head;
        ListNode* prev = reverse(head);
        if (!head) return head;


        if (n==1){
            ListNode dummy(0);
            ListNode* node = &dummy;
            node->next = prev->next;
            return reverse(dummy.next);
        }

        int index = 1;
        ListNode* delcurr = prev;

        while(index < n - 1){
            delcurr = delcurr->next;
            index++;
        }
        
        delcurr->next = delcurr->next ? delcurr->next->next : nullptr;


        return reverse(prev);
        
    }
};