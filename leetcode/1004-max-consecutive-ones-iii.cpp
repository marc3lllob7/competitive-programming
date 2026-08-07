class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, sum = 0, ans = 0, n = nums.size();
        for(int r = 0; r < n; r++){
            if (nums[r] == 0) sum++;
            while (sum > k){
                if (nums[l] == 0) sum--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
