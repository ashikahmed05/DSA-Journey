// ═══════════════════════════════════════════════════════
// Problem: 3435. Block Placement Queries
// Difficulty: Hard
// Topics: Array, Binary Search, Binary Indexed Tree, Segment Tree
// Runtime: 614 ms (Beats 29.7%)
// Memory: 366.8 MB (Beats 29.7%)
// Submitted: May 30, 2026
// Link: https://leetcode.com/problems/block-placement-queries/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<bool> getResults(vector<vector<int>>& queries) {

        int MX = 50005;

        set<int> obs;
        obs.insert(0);
        obs.insert(MX);

        vector<int> seg(4 * MX, 0);

        auto update = [&](auto&& self, int idx, int val,
                          int node, int l, int r) -> void {

            if (l == r) {
                seg[node] = val;
                return;
            }

            int mid = (l + r) / 2;

            if (idx <= mid)
                self(self, idx, val, 2 * node, l, mid);
            else
                self(self, idx, val, 2 * node + 1, mid + 1, r);

            seg[node] = max(seg[2 * node], seg[2 * node + 1]);
        };

        auto query = [&](auto&& self, int ql, int qr,
                         int node, int l, int r) -> int {

            if (qr < l || r < ql)
                return 0;

            if (ql <= l && r <= qr)
                return seg[node];

            int mid = (l + r) / 2;

            return max(
                self(self, ql, qr, 2 * node, l, mid),
                self(self, ql, qr, 2 * node + 1, mid + 1, r)
            );
        };

        update(update, MX, MX, 1, 0, MX);

        vector<bool> ans;

        for (auto& q : queries) {

            if (q[0] == 1) {

                int x = q[1];

                auto it = obs.upper_bound(x);

                int r = *it;
                int l = *prev(it);

                update(update, r, r - x, 1, 0, MX);
                update(update, x, x - l, 1, 0, MX);

                obs.insert(x);
            }

            else {

                int x = q[1];
                int sz = q[2];

                auto it = obs.upper_bound(x);

                int l = *prev(it);

                int best = query(query, 0, x, 1, 0, MX);

                best = max(best, x - l);

                ans.push_back(best >= sz);
            }
        }

        return ans;
    }
};
