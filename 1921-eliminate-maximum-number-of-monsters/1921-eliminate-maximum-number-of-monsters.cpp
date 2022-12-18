class Solution {
public:
  int eliminateMaximum(vector<int>& arr, vector<int>&v1) {
        for(int i =0 ;i<arr.size();i++){
            arr[i] = (arr[i]/v1[i])+bool(arr[i]%v1[i]);
           
        }
         sort(arr.begin(),arr.end());
         int res=1;
          for(int i =1; i<arr.size();i++){
              if((arr[i]-(i))<1)break;
                res++;
          }
    return res;
}

};