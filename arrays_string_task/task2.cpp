class Solution {
public:
    int firstUniqChar(string s) {
    map<char, int> kv;  
    for (auto i : s) {
        kv[i] = kv[i] + 1;  
    }
     for (char i : s) {
        if (kv[i] == 1)
        {
            return s.find(i);
        }
    }
    return -1;
    }
};
