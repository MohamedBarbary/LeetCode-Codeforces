class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='0'&&s[i]<='9')str+=s[i];
        	else if(s[i]>=97&&s[i]<=122)str+=s[i];
        	else if(s[i]>=65&&s[i]<=90)str+=s[i]+32;
        }
            int i =0 ; int j=str.length()-1;

            while(i<=j){
            	if(str[i]!=str[j]) return false;
            		i++;j--;
            }
            return true;
    }
};