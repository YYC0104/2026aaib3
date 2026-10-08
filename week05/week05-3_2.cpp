/// week05-3_2.cpp 學習計畫 Built-in Functions 第1題
/// LeetCode 58. Length of Last Word 最後那個字，有幾個字母
/// 其實前面需要寫 #include <stringstream> 不過LeetCode寫好了

class Solution {
public:
    int lengthOfLastWord(string s) {
        /// 要使用 stringstream 之前，需要先 #include <stringstream>
        stringstream ss(s); /// 這週教 string字串 stream 自流
        /// week04 C++ 的圓括號，是丟進去物件 初始化 的參數
        string ans; /// week02 C++ 字串宣告
        while(ss >> ans){ /// 今天的week05-1.cpp有用到
        /// 什麼都不做
        }
        return ans.length(); /// week01 及 week02 都教過(字串長度)
    }
};
