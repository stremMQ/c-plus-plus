class Solution {
    public:
        int lengthOfLastWord(string s) {
            int cnt{};
            int pct {};
            if(s[s.size()-1] == ' ')
            {
                for(auto i{s.size()}; i > 0; i--)
                {
                    if(s[i-1] != ' ')
                    {
                        break;
                    }
                    cnt ++;
                }
                for (auto i{s.size()-cnt}; i > 0; i--)
                {
                    if(s[i-1] != ' ')
                    {
                        pct++;
                    }
                    else break;
                }
            }
            else
            {
                for (auto i{s.size()}; i > 0; i--)
                {
                    if(s[i-1] != ' ')
                    {
                        pct++;
                    }
                    else break;
                }
            }
            return pct;
        }
};