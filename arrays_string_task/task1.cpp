class Solution {
public:
    bool canConstruct(string s, int k) { 
        if (s.length() <k) return false;
        unsigned int j =0;
        unsigned int count[26] ={0};
        for (char i:s)
        {
            count[i-'a']++;
        }
        for (unsigned int x:count)
        {
            if(x%2 !=0) j++;
        }
        if (j>k) return false;
        
        return true;
    
    }
};
