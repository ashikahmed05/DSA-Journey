// Last updated: 12/19/2025, 5:03:18 PM
1class KthLargest {
2public:
3// here i use min heap with TC O(mlogn) and SC O(k)
4    priority_queue<int, vector<int>, greater<int>> heap;
5    int k;
6
7    KthLargest(int k, vector<int>& nums) {
8        this->k = k;
9        for(int i : nums){
10            heap.push(i);
11            if(heap.size() > k) heap.pop();
12        }
13        
14    }
15    
16    int add(int val) {
17        heap.push(val);
18        if(heap.size() > k)heap.pop();
19        return heap.top();
20        
21    }
22};
23
24/**
25 * Your KthLargest object will be instantiated and called as such:
26 * KthLargest* obj = new KthLargest(k, nums);
27 * int param_1 = obj->add(val);
28 */