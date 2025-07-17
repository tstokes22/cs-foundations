class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> group;

        for (string str : strs){
            string key = str;
            sort(key.begin(), key.end());

            group[key].push_back(str);
            
        }
        vector<vector<string>> result;

        for (auto const& pair: group){
            result.push_back(pair.second);
        }
        return result;
    }
};
