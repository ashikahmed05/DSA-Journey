// Last updated: 12/11/2025, 11:32:11 AM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* next;
7    Node* random;
8    
9    Node(int _val) {
10        val = _val;
11        next = NULL;
12        random = NULL;
13    }
14};
15*/
16
17class Solution {
18public:
19    Node* copyRandomList(Node* head) {
20        unordered_map<Node*, Node*>duplicate;
21        if(!head) return NULL;
22        duplicate[nullptr] = nullptr;
23
24        Node* curr = head;
25        while(curr != nullptr){
26            duplicate[curr] = new Node(curr->val);
27            curr = curr->next;
28        }
29        Node* newcurr = head;
30        while(newcurr != nullptr){
31            duplicate[newcurr]->next = duplicate[newcurr->next];
32            duplicate[newcurr]->random = duplicate[newcurr->random];
33            newcurr = newcurr->next;
34
35        }
36        return duplicate[head];
37    }
38};