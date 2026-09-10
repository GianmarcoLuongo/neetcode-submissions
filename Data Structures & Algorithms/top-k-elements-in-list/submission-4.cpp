class Solution {

public:
    std::unordered_map<int, int> countMap;
    std::multimap<int, int, greater<int>> occMap;
    std::vector<int> TopKFrequentNumsVec;

    void occurrenciesCounter(std::vector<int> &nums)
    {
        for (int num : nums)
        {
            countMap[num]++;
        }

        for (auto &pair : countMap)
        {
            occMap.insert({pair.second, pair.first});
        }
    }

    vector<int> topKFrequent(vector<int>& nums, int k)
    {   
        int count = 0;
        occurrenciesCounter(nums);
        for(auto it = occMap.begin(); it != occMap.end() && count != k; it++)
        {
            TopKFrequentNumsVec.push_back(it->second);
            count++;
        }
        return TopKFrequentNumsVec;
    }
};