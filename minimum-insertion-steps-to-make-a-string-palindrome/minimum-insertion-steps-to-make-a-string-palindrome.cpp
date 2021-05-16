class Solution {
public:
    int minInsertions(string s) {
    int len=s.size();
    int sol[len][len];
    memset(sol, 0, sizeof(sol));
    for(int i=0;i<len;i++)
        sol[i][i]=1;
    for(int i=len-2;i>=0;i--){
        for(int j=i+1;j<len;j++){
            if(s[i]==s[j])
                sol[i][j]=2+sol[i+1][j-1];
            else
                sol[i][j]=max(sol[i][j-1], sol[i+1][j]);
            
        }
    }
    return len-sol[0][len-1];    
    }
};