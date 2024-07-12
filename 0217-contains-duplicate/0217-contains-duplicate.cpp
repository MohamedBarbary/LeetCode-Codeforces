class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
                map<int,int>numbersMap;
        for(int num : nums ){
        	numbersMap[num]+=1;
                	if(numbersMap[num]>1){
        		return true ;
        	}
        }
      return false;

    }
};