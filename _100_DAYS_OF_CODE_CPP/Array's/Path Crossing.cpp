
//https://leetcode.com/problems/path-crossing/submissions/1126821269/?envType=daily-question&envId=2023-12-23

class Solution {
public:
    bool isPathCrossing(string path) {
        vector<pair<int,int>>nums;
        int x=0,y=0;
        nums.push_back({x,y});
        for(int i=0;i<path.size();i++){
            if(path[i]=='N') x++;
            else if(path[i]=='S') x--;
            else if(path[i]=='W') y--;
            else y++;
            nums.push_back({x,y});
        }
        set<pair<int,int>>s(nums.begin(),nums.end());
        // for(auto x:nums) cout<<x.first<<" "<<x.second<<endl;
        // cout<<s.size()<<" "<<nums.size();
        if(s.size()==nums.size()) return false;
        return true;
    }
};
