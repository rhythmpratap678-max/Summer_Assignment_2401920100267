class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0){
            return -1;
        }
        int hL = haystack.size();
        int nL = needle.size();
        for(int i=0; i<hL-nL+1; i++){
            int j = 0;
            while(j < nL && haystack[i+j]==needle[j]){
                j++;
            }
            if(j == nL){
                return i;
            }
        }
        return -1;
    }
};