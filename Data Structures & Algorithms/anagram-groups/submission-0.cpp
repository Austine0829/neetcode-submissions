class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> uMap;

        sort(strs.begin(), strs.end());

        for(int i = 0; i < strs.size(); i++) {
            vector<string> temp = strs;
            sort(temp[i].begin(), temp[i].end());
            uMap[temp[i]].push_back(strs[i]);
        }

        vector<vector<string>> result;

        for(auto i : uMap) {
            result.push_back(i.second);
        }

        return result;
    }
};
