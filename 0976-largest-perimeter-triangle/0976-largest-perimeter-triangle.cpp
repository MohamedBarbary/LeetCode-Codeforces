class Solution {
public:
   int largestPerimeter(vector<int>& v) {
       sort(v.begin(),v.end());
       int mx=0;
       int f=0;
       for(int i = v.size()-1 ; i>=2;i--){
           for(int j = i-1 ; j>=1;j--) {
                if(v[i]<(v[j]+v[j-1])){
                   f=1;
                    mx=v[i]+v[j]+v[j-1];
                   break;
                }
           }                if(f)break;

       }
    return mx;
}
};