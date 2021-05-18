class Solution {
public:
    
    int minDistance(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        vector<vector<int>> dp(l1+1, vector<int>(l2+1, -1));
        for(int i=0; i<l2+1; i++){
            dp[0][i]=0;
        }
        for(int i=0; i<l1+1; i++){
            dp[i][0]=0;
        }
        int res=0;
        for(int i=1; i<l1+1; i++){
            for(int j=1; j<l2+1; j++){
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
                
            }
        }
       return l1-dp[l1][l2] + l2-dp[l1][l2];  
                  
    }
};