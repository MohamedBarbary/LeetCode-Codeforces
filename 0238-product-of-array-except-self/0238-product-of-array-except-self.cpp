class Solution {
	public:
	    vector<int> productExceptSelf(vector<int>& nums) {
          int countZeros =0;
          int multiValue =1;
          int arrSize= nums.size();
          vector<int>res;
             for(int x : nums ){
            	 if(x==0)countZeros++;
            	 else multiValue *=x; 
             } 
             if(countZeros>1) for(int i =0;i<arrSize;i++) res.push_back(0);
             else if (countZeros==1) {
            	 for (int x : nums){
            		 if(x!=0) res.push_back(0);
            		 else res.push_back(multiValue);
            	 }
             }else for (int x:nums) res.push_back(multiValue/x);
             
             return res;
	    }
	    
};
