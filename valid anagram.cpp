/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/882/ */

/* Difficulty Level : Easy*/

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
         vector<int> v1 = checkString(s);
         vector<int> v2 = checkString(t);
        
         if(v1==v2)
             return true;
         else
             return false;
    }
  vector<int> checkString(string s)
  {
      vector<int> V;
      for(int i=0;i<26;i++)
      {
          V.push_back(0);
      }
      for(int i=0;i<s.size();i++)
      {
          int x = (int)s[i] - 97;
          V[x]=V[x]+1;
      }
    return V  ;
  }
};

/* Map Implementation 

class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char, int> map;
        if(s.size() != t.size())
            return false; 
        for(auto i:s)
            map[i]++;
        for(auto i:t)
            map[i]--;
        for(auto i:map)
            if(i.second != 0)
                return false;
        return true;
    }
};

*/