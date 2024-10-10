
//https://leetcode.com/problems/add-strings/submissions/1418354197/

class Solution {
public:

    void solve(string &s1,int i,string &s2,int j,int carry,string &ans){
        if(i>s1.size() && j>s2.size()){
            if(carry){
                ans.push_back(carry+'0');
                return;
            }
            return;
        }
        int num1=(i>=0?s1[i]:'0')-'0';
        int num2=(j>=0?s2[j]:'0')-'0';
        int sum=num1+num2+carry;
        ans.push_back((sum%10)+'0');
        carry=sum/10;
        solve(s1,i-1,s2,j-1,carry,ans);
    }

    string addStrings(string num1, string num2) {
        string ans="";
        solve(num1,num1.size()-1,num2,num2.size()-1,0,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
