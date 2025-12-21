// Last updated: 12/21/2025, 12:09:37 PM
1class Solution {
2public:
3    int partition(vector<int>& nums, int left, int right) {
4        int mid = (left + right) >> 1;
5        swap(nums[mid], nums[left + 1]);
6
7        if (nums[left] < nums[right])
8            swap(nums[left], nums[right]);
9        if (nums[left + 1] < nums[right])
10            swap(nums[left + 1], nums[right]);
11        if (nums[left] < nums[left + 1])
12            swap(nums[left], nums[left + 1]);
13
14        int pivot = nums[left + 1];
15        int i = left + 1;
16        int j = right;
17
18        while (true) {
19            while (nums[++i] > pivot);
20            while (nums[--j] < pivot);
21            if (i > j) break;
22            swap(nums[i], nums[j]);
23        }
24
25        nums[left + 1] = nums[j];
26        nums[j] = pivot;
27        return j;
28    }
29
30    int quickSelect(vector<int>& nums, int k) {
31        int left = 0;
32        int right = nums.size() - 1;
33
34        while (true) {
35            if (right <= left + 1) {
36                if (right == left + 1 && nums[right] > nums[left])
37                    swap(nums[left], nums[right]);
38                return nums[k];
39            }
40
41            int j = partition(nums, left, right);
42
43            if (j >= k) right = j - 1;
44            if (j <= k) left = j + 1;
45        }
46    }
47
48    int findKthLargest(vector<int>& nums, int k) {
49        return quickSelect(nums, k - 1);
50    }
51};