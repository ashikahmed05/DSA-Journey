// Last updated: 11/15/2025, 12:08:26 PM
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
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return head;

        ListNode* rev = reverse(head);

        if (n == 1) {
            ListNode dummy(0);
            dummy.next = rev->next;
            return reverse(dummy.next);
        }

        int index = 1;
        ListNode* curr = rev;

        while (index < n - 1 && curr->next) {
            curr = curr->next;
            index++;
        }

        curr->next = curr->next ? curr->next->next : nullptr;

        return reverse(rev);
    }
};
