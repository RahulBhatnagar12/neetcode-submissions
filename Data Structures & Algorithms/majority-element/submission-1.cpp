class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int maxi=INT_MIN;
        for(auto it:mp){
           maxi=max(maxi,it.second);
        }
        for(auto it:mp){
            if(it.second==maxi) return it.first;
        }
        return -1;
    }
};