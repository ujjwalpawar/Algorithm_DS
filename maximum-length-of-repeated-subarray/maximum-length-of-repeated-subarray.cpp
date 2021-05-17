class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size();
        int l2=nums2.size();
        int sol[l1+1][l2+1];
        for(int i=0; i<l2+1; i++)
            sol[0][i]=0;
        for(int i=0; i<l1+1; i++)
            sol[i][0]=0;
        int res=0;
        for(int i=1; i<l1+1; i++){
            for(int j=1; j<l2+1; j++){
                if(nums1[i-1]== nums2[j-1])
                    sol[i][j]=1+sol[i-1][j-1];
                else
                    sol[i][j]=0;
                res=max(res,sol[i][j]);
            }
        }
        return res ;
        
    }
};