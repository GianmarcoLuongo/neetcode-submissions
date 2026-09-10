class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        std::unordered_map<string,vector<string>> group_map;
        for (auto str : strs)
        {
            string key = str;
            std::sort(key.begin(),key.end());
            group_map[key].push_back(str);
        }
        std::vector<vector<string>> result;
        for (auto [key,value] : group_map)
        {
            result.push_back(value);
        }
    return result;
    }
};
