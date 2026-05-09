class Solution {
public:
    vector<int> countBits(int n) {
        int cnt=0;
        vector<int>ans;
        for(int i=0;i<=n;i++){
        cnt=__builtin_popcount(i);
         ans.push_back(cnt);
        }
        
        return ans;
    }
};
