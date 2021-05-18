class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int l1=nums.size();
        vector<int> dp(l1, 1);
        int res=1;
        dp[0]=1;
        for(int i=1; i<l1; i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j] and dp[j]>=dp[i]){ 
                dp[i]=dp[j]+1;
                res=max(res, dp[i]);    
                }
             
                    
            }    
        }
        return res;        
    }
};