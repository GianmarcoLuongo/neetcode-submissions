class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> numOccurrenciesMap;
        std::multimap<int,int,std::greater<int>> mostFreqElemsMap;

        for (auto& num : nums)
        {
            numOccurrenciesMap[num]++;
        }

        for (auto it = numOccurrenciesMap.begin();it!= numOccurrenciesMap.end();it++)
        {
            //cout<<"[*] Numero : "<<it->first<<" occorrenze : "<<it->second<<"\n";
            mostFreqElemsMap.insert({it->second,it->first});
        }


        int count = 0;
        std::vector<int> resultVec;
        for (auto it = mostFreqElemsMap.begin();it!=mostFreqElemsMap.end() && count != k;it++)
        {
            resultVec.push_back(it->second);
            count++;
            
        }


    
    return resultVec;

    }
};
