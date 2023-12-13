
//https://leetcode.com/problems/special-positions-in-a-binary-matrix/submissions/1119061375/?envType=daily-question&envId=2023-12-13

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        long long count=0;
        for(int row=0;row<mat.size();row++){
            for(int col=0;col<mat[0].size();col++){
                if(mat[row][col]==0) continue;
                bool flag=true;
                for(int i=0;i<mat.size();i++){
                    if(i==row) continue;
                    else if(mat[i][col]==1){
                        flag=false;
                        break;
                    }
                }
                for(int i=0;i<mat[0].size();i++){
                    if(i==col) continue;
                    else if(mat[row][i]==1){
                        flag=0;
                        break;
                    }
                }
                if(flag) count++;
            }
        }
        return count;
    }
};
