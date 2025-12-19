// Last updated: 12/19/2025, 4:57:50 PM
1class KthLargest {
2public:
3    priority_queue<int, vector<int>, greater<int>> heap;
4    int k;
5
6    KthLargest(int k, vector<int>& nums) {
7        this->k = k;
8        for(int i : nums){
9            heap.push(i);
10            if(heap.size() > k) heap.pop();
11        }
12        
13    }
14    
15    int add(int val) {
16        heap.push(val);
17        if(heap.size() > k)heap.pop();
18        return heap.top();
19        
20    }
21};
22
23/**
24 * Your KthLargest object will be instantiated and called as such:
25 * KthLargest* obj = new KthLargest(k, nums);
26 * int param_1 = obj->add(val);
27 */