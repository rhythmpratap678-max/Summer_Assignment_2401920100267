class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.size() < p.size()){
            return ans;
        }
        vector<int> pcount(26, 0);
        vector<int> window(26, 0);
        for(char c:p){
            pcount[c-'a']++;
        }
        int k= p.size();
        for(int i=0; i<s.size(); i++){
            window[s[i]-'a']++;
            if(i>=k){
                window[s[i-k]-'a']--;
            }
            if(window == pcount){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};