class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector<pair<int, int>> aux;
        vector<int> ans;

        for(int i = 0; i < n; i++) aux.push_back({nums[i], i});
        sort(aux.begin(), aux.end());

        int l = 0, r = n - 1;

        while(l <= r){
            if (aux[l].first + aux[r].first == target) break;
            if (aux[l].first + aux[r].first > target) r--;
            else l++;
        }

        int lans = aux[l].second, rans = aux[r].second;

        ans.push_back(lans);
        ans.push_back(rans);

        return ans;
    }
};
