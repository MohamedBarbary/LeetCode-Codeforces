class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        set<int> st(nums.begin(), nums.end());
        int mx = 1, res = 1;
        auto first = st.begin();

        for (auto it = next(st.begin()); it != st.end(); ++it) {
            if (*it == *first + 1) {
                mx++;
            } else {
                mx = 1;
            }
            first = it;
            res = max(res, mx);
        }

        return res;
    }
};
