// ═══════════════════════════════════════════════════════
// Problem: 3933. Minimum Jumps to Reach End via Prime Teleportation
// Difficulty: Medium
// Topics: Array, Hash Table, Math, Breadth-First Search, Number Theory
// Runtime: 476 ms (Beats 81.9%)
// Memory: 356.6 MB (Beats 38.7%)
// Submitted: May 8, 2026
// Link: https://leetcode.com/problems/minimum-jumps-to-reach-end-via-prime-teleportation/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int minJumps(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;

        int mx = *max_element(nums.begin(), nums.end());

        vector<int> spf(mx + 1);
        for (int i = 0; i <= mx; i++) spf[i] = i;

        for (long long i = 2; i * i <= mx; i++) {
            if (spf[i] == i) {
                for (long long j = i * i; j <= mx; j += i) {
                    if (spf[j] == j) spf[j] = i;
                }
            }
        }

        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            int x = nums[i];

            while (x > 1) {
                int p = spf[x];
                mp[p].push_back(i);

                while (x % p == 0) x /= p;
            }
        }

        vector<int> vis(n, 0);
        vector<int> used(mx + 1, 0);

        queue<int> q;
        q.push(0);
        vis[0] = 1;

        int steps = 0;

        while (!q.empty()) {
            int sz = q.size();

            while (sz--) {
                int i = q.front();
                q.pop();

                if (i == n - 1) return steps;

                if (i - 1 >= 0 && !vis[i - 1]) {
                    vis[i - 1] = 1;
                    q.push(i - 1);
                }

                if (i + 1 < n && !vis[i + 1]) {
                    vis[i + 1] = 1;
                    q.push(i + 1);
                }

                int val = nums[i];

                if (val >= 2 && spf[val] == val && !used[val]) {
                    used[val] = 1;

                    for (int nxt : mp[val]) {
                        if (!vis[nxt]) {
                            vis[nxt] = 1;
                            q.push(nxt);
                        }
                    }
                }
            }

            steps++;
        }

        return -1;
    }
};
