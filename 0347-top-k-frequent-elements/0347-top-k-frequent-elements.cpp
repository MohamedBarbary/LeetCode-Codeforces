class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    	        map<int, int> mp;
    	        for (int num : nums) {
    	        	mp[num]++;
    	        }

    	        
    	        priority_queue<pair<int, int>> p;
    	        for (const auto& i : mp) {
    	            p.push({i.second, i.first});
    	        }

    	        vector<int> v;
    	        while (k > 0 && !p.empty()) {
    	            v.push_back(p.top().second);
    	            p.pop();
    	            k--;
    	        }

    	        return v;
    }
};