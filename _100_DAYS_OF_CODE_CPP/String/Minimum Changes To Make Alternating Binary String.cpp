
//https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/submissions/1127456123/?envType=daily-question&envId=2023-12-24

class Solution {
public:
    int minOperations(string s) {
        string s0="",s1="";
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                s0.push_back('0');
                s1.push_back('1');
            }
            else{
                s0.push_back('1');
                s1.push_back('0');
            }
        }
        int ans0=0,ans1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s0[i]) ans0++;
            if(s[i]!=s1[i]) ans1++;
        }
        return min(ans0,ans1);
    }
};
