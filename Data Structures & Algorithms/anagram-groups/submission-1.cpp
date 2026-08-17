class Solution {
public:
    // bool isAnagram(string s, string t) {
    //     if(s.size() != t.size()) return false;
    //     vector<int>freq(26,0);
    //     for(char c :s){
    //         freq[c-'a']++;
    //     }
    //     for(char c :t){
    //         freq[c -'a']--;
    //     }
    //     for(int i=0;i<freq.size();i++){
    //         if(freq[i] !=0){
    //             return false;
    //         }
    //     }return true;
        
    // }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<vector<string>> ans;
        // int n = strs.size();
        // vector<bool>vis(n,false);

        // for(int i = 0; i < n; i++){
        //     if (vis[i]) continue;
        //     vector<string> group;
        //     group.push_back(strs[i]);
        //     vis[i] = true;
        
  
        
        //     for(int j =i+1;j<n;j++){
        //         if(!vis[j] && isAnagram(strs[i],strs[j])){
        //             group.push_back(strs[j]);
        //             vis[j] = true;
        //         }
        //     }ans.push_back(group);
        // }
        // return ans;
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());

            mp[key].push_back(s);
        }
                vector<vector<string>> ans;

        for (auto &it : mp) {
            ans.push_back(it.second);
        }

        return ans;
        
    }
};
