class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int left=0, right=0, maxlen=0;

        while(right<s.size()){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
             st.insert(s[right]);
             maxlen = max(maxlen, right-left+1);
             right++;
        } 
        return maxlen; 
    }
};