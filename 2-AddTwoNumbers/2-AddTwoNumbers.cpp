// Last updated: 12/11/2025, 2:29:34 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11 // Here i am using basic elementary addition math to solve this luckily the out put is already in given out put format thats why i can do this in O(max(m,n) time and O(1)space.
12class Solution {
13public:
14    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
15        ListNode dummy(0);
16        ListNode* answer = &dummy;
17        int carry = 0;
18        int sum;
19        ListNode* l1curr = l1;
20        ListNode* l2curr = l2;
21
22
23        while(l1curr != nullptr || l2curr != nullptr || carry != 0){
24            int v1 = 0;
25            int v2 = 0;
26            if (l1curr != nullptr) {
27                v1 = l1curr->val;
28                l1curr = l1curr->next;
29            }
30            if (l2curr != nullptr) {
31                v2 = l2curr->val;
32                l2curr = l2curr->next;
33            }
34            sum = v1 + v2 + carry;
35            carry = sum / 10;
36            answer->next = new ListNode(sum % 10);
37            answer = answer->next;
38        }
39
40
41        return dummy.next;
42        
43    }
44};