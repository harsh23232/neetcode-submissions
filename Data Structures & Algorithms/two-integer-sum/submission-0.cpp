class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>res;
        int x = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            x = target - nums[i];
            if(mp.find(x) != mp.end()){
                res.push_back(mp[x]);
                res.push_back(i);
            }
            mp[nums[i]] = i;
        }return res;
        
        
    }
};
