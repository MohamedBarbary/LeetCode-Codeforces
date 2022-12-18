class Solution {
public:
 int largestSumAfterKNegations(vector<int>& arr, int k) {
           sort(arr.begin(),arr.end());
             for(int i=0;i < arr.size() ; i++ ){
                 if(k>0&&arr[i]<0){arr[i]*=-1;k--;}
             }
                sort(arr.begin(),arr.end());

     
             if(k>0){(k%2==0)?arr[0]*=1:arr[0]*=-1;}
               int res=0;
               for(int i=0;i<arr.size();i++){res+=arr[i];}
    return res;
}
};