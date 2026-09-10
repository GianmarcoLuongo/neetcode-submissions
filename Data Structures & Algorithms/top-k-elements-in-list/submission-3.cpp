class Solution {
public:
    vector<pair<int,int>> occPairVec;
    vector<int> occVec;
    void freqCounter(vector<int>& nums)
    {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }
        for (auto& entry : counts) {
            occPairVec.push_back(pair<int,int>(entry.second, entry.first));
        }
    }

    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        freqCounter(nums);
        std::stable_sort(occPairVec.begin(), occPairVec.end(), greater());
        
        if (k <= occPairVec.size())
        {
            occPairVec = vector<pair<int,int>>(occPairVec.begin(), occPairVec.begin() + k);
            for (auto pair : occPairVec)
            {
                occVec.push_back(pair.second);
            }
        }

        return occVec;
    }
};