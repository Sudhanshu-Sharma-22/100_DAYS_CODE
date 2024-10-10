#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&nums,int target){
	if(target==0) return 0;
	else if(target<0) return INT_MAX;
	int mini=INT_MAX;
	for(int i:nums){
		int ans=solve(nums,target-i);
		if(ans!=INT_MAX) mini=min(mini,ans+1);
	}
	return mini;
}

int main() {
	vector<int>nums={1,2,3};
	int ans=solve(nums,7);
	cout<<ans;
	return 0;
}
