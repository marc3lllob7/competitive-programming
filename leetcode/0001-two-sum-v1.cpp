class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector<int> aux(n), ans;
        multimap<int, int> dic;

        aux = nums;
        for(int i = 0; i < n; i++) dic.insert({nums[i], i});
        sort(aux.begin(), aux.end());

        int l = 0, r = n - 1;

        while(l <= r){
            if (aux[l] + aux[r] == target) break;
            if (aux[l] + aux[r] > target) r--;
            else l++;
        }

        auto lit = dic.find(aux[l]);
        l = lit->second;
        if(lit != dic.end()) dic.erase(lit);

        auto rit = dic.find(aux[r]);
        r = rit->second;
        if(rit != dic.end()) dic.erase(rit);

        ans.push_back(l);
        ans.push_back(r);

        return ans;
    }
};
