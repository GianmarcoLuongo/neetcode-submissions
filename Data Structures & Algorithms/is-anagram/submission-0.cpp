class Solution {
public:
    std::vector<std::pair<char,int>> stringCharCounter(string s)
    {   
        std::vector<std::pair<char,int>> chars_counter_pair;
        int occurrences_counter = 0;
            for (int i=0;i<s.length();i++)
            {
                for(int j=i+1;j<s.length();j++)
                {
                    if (s[i] == s[j])
                    {
                        occurrences_counter++;
                    }
                }
                std::pair<char,int> char_count_pair = std::pair<char,int>(s[i],occurrences_counter);

                chars_counter_pair.push_back(char_count_pair);
                occurrences_counter = 0;
            }
        return chars_counter_pair;
        
    }


    bool isAnagram(string s, string t) {
        std::vector<std::pair<char,int>> s_char_occ_count_pair;
        std::vector<std::pair<char,int>> t_char_occ_count_pair;
        s_char_occ_count_pair = stringCharCounter(s);
        t_char_occ_count_pair = stringCharCounter(t);
        sort(s_char_occ_count_pair.begin(),s_char_occ_count_pair.end());
        sort(t_char_occ_count_pair.begin(),t_char_occ_count_pair.end());
        if (s_char_occ_count_pair == t_char_occ_count_pair)
        {
            return true;
        }
        else return false;
    }
};
