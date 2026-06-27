class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
              if(mp.find(target-nums[i])!=mp.end()){
            int j=mp[target-nums[i]];
            return {min(i,j),max(i,j)};
              }
              mp[nums[i]]=i;
        }
        return {};
    }
};
