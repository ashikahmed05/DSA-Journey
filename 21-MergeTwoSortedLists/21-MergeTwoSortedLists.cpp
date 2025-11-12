// Last updated: 11/13/2025, 12:14:36 AM

class Solution {
public:
//Here i used iteration method with TC O(m+n)
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode answer(0);
        ListNode* node = &answer;
        while(list1 != nullptr && list2 != nullptr){
            if (list1->val >= list2->val){
                node->next = list2;
                list2 = list2->next;

            }else {
                node->next = list1;
                list1 = list1->next;
            }
            node = node->next;
        }
        if(list1 == nullptr){
            node->next = list2;
        } else {
            node->next = list1;
        }
        return answer.next;
        
    }
};