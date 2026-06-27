class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
          int n = nums.size();

        // Step 1
        for(int i=0;i<n;i++){

            if(nums[i] <= 0 || nums[i] > n)
                nums[i] = n+1;
        }

        // Step 2
        for(int i=0;i<n;i++){

            int x = abs(nums[i]);

            if(x <= n){

                int idx = x-1;

                nums[idx] = -abs(nums[idx]);
            }
        }

        // Step 3
        for(int i=0;i<n;i++){

            if(nums[i] > 0)
                return i+1;
        }

        return n+1;
    }
};