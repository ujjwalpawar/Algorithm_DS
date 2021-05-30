class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     int min=INT_MAX;
        if(strs.size()==0)
            return "";
        if(strs.size()==1)
            return strs[0];
        for(auto i : strs){
            if(min>i.length())
                min=i.length();
        }
        int flag=0;
      for(int i=min;i>=0;i--){
          if(flag==1)
              if(i==-1)
                return strs[0].substr(0,i+2);
              else
                  return strs[0].substr(0,i+1);
          if(i==-1)
              return "";
          string temp=strs[0].substr(0,i);
          for(auto itr :strs){
              if(temp==itr.substr(0,i)){
                  flag=1;
              }
              else{
                  flag=0;  
                  break;
              }
         }
      }
    
    return "";
    }
};