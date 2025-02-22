class Solution {
public:
    string reverseWords(string s) {

    stack<string> words;
    string word = "";

        for (char c : s) {
            if (c != ' ') {
                word += c; 
            } else {
                if (!word.empty()) {  
                    words.push(word);
                    word = "";  
                }
            }
        }
        if (!word.empty()) {
            words.push(word);
        }

        s = "";
        while (!words.empty()) {
            s += words.top();  
            words.pop();
            if (!words.empty()) s += " "; 
        }

    return s;
    }
};
