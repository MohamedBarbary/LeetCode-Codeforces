class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int fre[100005];
            memset(fre,0, sizeof(fre));
           int n=s.size();
            int mx=0;int cnt=0;
            int i=0,j=0;
            while(j<n) {
               fre[s[j]]++;
               if(fre[s[j]]>1){
                   while(i<n&&fre[s[j]]>1){
                       fre[s[i]]--;i++;cnt--;
                   }
                   fre[s[j]]--;
            }else {j++;cnt++;}
               mx=max(mx,cnt);
            }
                return mx;
    }
    };