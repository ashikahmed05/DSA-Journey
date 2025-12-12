// Last updated: 12/12/2025, 2:38:43 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int slow = nums[0];
5        int fast = nums[0];
6        do{
7            slow = nums[slow];
8            fast = nums[nums[fast]];
9        } while(slow != fast);
10
11        fast = nums[0];
12
13        while(slow != fast){
14            fast = nums[fast];
15            slow = nums[slow];
16        }
17        return slow;
18        
19    }
20};