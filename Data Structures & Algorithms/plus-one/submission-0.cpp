class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int carry=1;
        vector<int>ans;
        int n=digits.size();
        int i=0;
        while(i<n){
            int dig=carry+digits[i];
            ans.push_back(dig%10);
            carry=dig/10;
            i++;
        }
        if(carry) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
