typedef long long ll;

class Solution {
public:
   vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    sort(arr.begin(),arr.end());
     ll mn = 1e16;
     int n = arr.size();
       for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])<mn)mn=abs(arr[i]-arr[i+1]);
       }
       vector<vector<int>>res;
    for(int i=0;i<n-1;i++) {
         if(abs(arr[i]-arr[i+1])==mn)res.push_back({arr[i],arr[i+1]});
    }
    return res;
    }
};