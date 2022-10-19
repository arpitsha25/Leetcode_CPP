class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> sen(sentence.begin() , sentence.end());
        return (sen.size() == 26) ? true : false;
    }
};