
//https://leetcode.com/problems/string-compression/submissions/1120965730/

class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>ans;
        for(int i=0;i<chars.size();i++){
            int count=0;
            char ch=chars[i];
            if(i<chars.size()-1 && chars[i+1]==ch){
                for(int j=i+1;j<chars.size();j++){
                    if(chars[j]!=ch) break;
                    count++;
                    i++;
                }
            }
            ans.push_back(ch);
            // cout<<count<<" ";
            if(count){
                ++count;
                string temp=to_string(count);
                for(int k=0;k<temp.size();k++){
                    // cout<<temp[k]<<" ";
                    ans.push_back(temp[k]);
                }
                // cout<<temp<<" ";
            }
        }
        // for(char ch:ans) cout<<ch<<" ";
        chars=ans;
        return ans.size();
    }
};
