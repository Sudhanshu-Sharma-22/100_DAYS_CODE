
//https://leetcode.com/problems/destination-city/submissions/1120175999/?envType=daily-question&envId=2023-12-15

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>s;
        for(vector<string> str:paths) s.insert(str[0]);
        for(vector<string> str:paths) if(!s.count(str[1])) return str[1];
        return "";
    }
};
