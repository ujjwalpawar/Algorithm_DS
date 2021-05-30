class Solution {
public:
    bool validPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        int flag=true;
        int flag2=true;
        int pos=0;
        int pos2=0;
        while(start<end){
            if(s[start]==s[end]){
                start++;
                end--;
                continue;
            }
            else if(flag==true){
                pos=start;
                pos2=end;
                start++;
                flag=false;
                
                continue;
            }
            else if(flag2==true){
                start=pos;
                end=pos2;
                end--;
                flag2=false;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};