// Last updated: 11/14/2025, 4:02:32 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 
class Solution {
    //Here i am using Floyds loop method where i am using slow and fast pointers with TC O(n) && O(1)
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* fast = head;
        ListNode* slow = head;
        int num = 0;
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return true;

        }
        return false;
        
    }
};