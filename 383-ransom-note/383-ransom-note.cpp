class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>rumap;
        unordered_map<char,int>mumap;
        for(int i=0;i<ransomNote.size();i++)
            rumap[ransomNote[i]]++;
        for(int i=0;i<magazine.size();i++)
            mumap[magazine[i]]++;
        bool ree=true;
        for(auto x:rumap)
        {
            auto it=mumap.find(x.first);
            if(it!=mumap.end())
            {
                if(it->second>=x.second)
                    continue;
                else
                {
                    ree=false;
                    break;
                }
            }
            else if(it==mumap.end())
            {
                ree=false;
                break;
            }
        }
        return ree;
        
    }
};