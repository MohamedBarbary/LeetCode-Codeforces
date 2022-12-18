class Solution {
public:
  int eliminateMaximum(vector<int>& arr, vector<int>&v1) {
        vector<int>v;
        for(int i =0 ;i<arr.size();i++){
            int n = (arr[i]/v1[i])+bool(arr[i]%v1[i]);
            v.push_back(n);
        }
         sort(v.begin(),v.end());
         int res=1;
          for(int i =1; i<arr.size();i++){
              if((v[i]-(i))<1)break;
                res++;
          }
    return res;
}

};