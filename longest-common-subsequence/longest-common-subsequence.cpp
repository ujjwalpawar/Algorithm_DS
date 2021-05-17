class Solution {
public:
    
    int longestCommonSubsequence(string text1, string text2) {
        int l1=text1.size();
        int l2=text2.size();
        int sol[l1+1][l2+1];
        for(int i=0; i<l2+1; i++){
            sol[0][i]=0;
        }
         for(int i=0; i<l1+1; i++){
            sol[i][0]=0;
        }
        
        for(int i=1; i<l1+1; i++){
           for(int j=1; j<l2+1; j++){
               if(text1[i-1]==text2[j-1])
                   sol[i][j]=1+sol[i-1][j-1];
               else
                   sol[i][j]=max(sol[i-1][j], sol[i][j-1]);
               
               }
               
           }
        
        return sol[l1][l2];
    }
};