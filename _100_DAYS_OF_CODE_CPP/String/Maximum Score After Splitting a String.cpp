
//https://leetcode.com/problems/maximum-score-after-splitting-a-string/submissions/1126063203/?envType=daily-question&envId=2023-12-22

class Solution {
public:

    int count(string left,string right){
        int cleft=0,cright=0;
        // cout<<left<<" "<<right<<endl;
        for(int i=0;i<left.size();i++){
            if(left[i]=='0'){
                cout<<i<<" ";
                cleft++;
            }
        }
        for(int i=0;i<right.size();i++){
            if(right[i]=='1'){
                cout<<"r ";
                cright++;
            }
        }
        return cleft+cright;
    }

    int maxScore(string s) {
        long long ans=0;
        for(int i=0,j=i+1;j<s.size();i++,j++){
            string left,right;
            left=s.substr(0,i+1);
            right=s.substr(j,s.size()-1);
            cout<<left<<" "<<right<<endl;
            int temp=count(left,right);
            cout<<temp<<endl;
            if(temp>ans) ans=temp;
        }
        return ans;
    }
};
