class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0, right=n-1;
        int pos=n-1;
        vector<int>ans(n);
        while(left<=right){
            int sqrleft = nums[left]*nums[left];
            int sqrright = nums[right]*nums[right];

            if(sqrleft<sqrright){
            ans[pos]=sqrright;
            right--;
        }
        else{
            ans[pos]=sqrleft;
            left++;
        }
        pos--;
        }
    return ans;
    }
};