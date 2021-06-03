class Solution {
public:
    int arr[205][205];
    bool res(string s1, string s2, string s3, int i, int j, int k){
        bool t1=0, t2=0, t3=0;

        if(i==s1.size() and s2.size()==j)
            return true;
        if(arr[i][j]!=-1)
            return arr[i][j];
            
        if((i<s1.size() and s3[k]==s1[i]) and(j== s2.size() or j<s2.size() and  s3[k]!=s2[j]))
            t1=res(s1,s2,s3,i+1,j,k+1);

        if((j<s2.size() and s3[k]==s2[j])  and ( i==s1.size() or i<s1.size() and s3[k]!=s1[i]))
            t2=res(s1,s2,s3,i,j+1,k+1);

        if(i<s1.size() and j<s2.size() and s3[k]==s1[i] and s3[k]==s2[j])
            t3=res(s1,s2,s3,i+1,j,k+1) or  res(s1,s2,s3,i,j+1,k+1);

        return arr[i][j]=t1 or t2 or t3;;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length()+s2.length()!=s3.length())
            return false;
        memset(arr, -1, sizeof(arr));
        return res(s1,s2,s3,0,0,0);
    }
};