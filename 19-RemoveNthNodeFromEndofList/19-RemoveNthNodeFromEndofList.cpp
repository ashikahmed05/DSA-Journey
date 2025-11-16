// Last updated: 11/16/2025, 3:11:48 PM
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
// Here i am using two pointer method with TC O(n)
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return nullptr;
        ListNode node(0);
        ListNode* dummy = &node;
        dummy->next = head;
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        for(int i = 0; i <= n; i++ ){
            
            fast = fast->next;
            
        }
        while(fast){
            fast = fast->next;
            slow = slow->next;
        }
        

        slow->next = slow->next->next;
        return node.next;
        
    }
};