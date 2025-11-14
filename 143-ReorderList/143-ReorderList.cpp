// Last updated: 11/15/2025, 12:05:34 AM
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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode* prime = head;

        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast){
            slow = slow->next;
            if(fast->next && fast->next->next){
                fast = fast->next->next;
            }else break;
        }
        ListNode* second = slow->next;
        slow->next = nullptr;
        ListNode* scurr = second;
        ListNode* sprev = nullptr;
        while(scurr){
            ListNode* next = scurr->next;
            scurr->next = sprev;
            sprev = scurr;
            scurr = next;
        }

        ListNode* first = prime;
        ListNode* sec = sprev;

        while(sec){

            ListNode* firstnext = first->next;
            ListNode* secondnext = sec->next;
            first->next = sec;
            sec->next = firstnext;
            first = firstnext;
            sec = secondnext;
        } 
        return;

        
        
    }
};