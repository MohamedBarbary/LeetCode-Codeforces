class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    	 unordered_map<string, vector<string>> mp;
    	 for(string x : strs){
    	        string sorted_x = x;
        	sort(sorted_x.begin(),sorted_x.end());
            mp[ sorted_x].push_back(x);
        }

        vector<vector<string>> result;
        for (const auto& pair : mp) {
              result.push_back(pair.second);
          }           
        	return result;

}
};