class Solution {
public:
    int singleNumber(vector<int>& nums) {
int xxor=0;
for(auto num:nums) xxor^=num;
return xxor;
    }
};
