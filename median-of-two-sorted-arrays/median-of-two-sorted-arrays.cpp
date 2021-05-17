class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int len1=nums1.size();
        int len2=nums2.size();
        int i=0,j=0;
        while(i!=len1 and j!=len2){
            if(nums1[i]>=nums2[j]){
                result.push_back(nums2[j]);
                j++;
                        
                }
            else if(nums1[i]<nums2[j]){
                result.push_back(nums1[i]);
                i++;
                      
               }
            
            
        }    
        if(i==len1){
            while(j!=len2){
                result.push_back(nums2[j]);
                j++;
            }
            
        }
       if(j==len2){
            while(i!=len1){
                result.push_back(nums1[i]);
                i++;
            }
            
        }
        int temp=result.size();

        if(temp%2==0){
            return (result[temp/2]+result[(temp/2)-1])/2.0;
        }
        else{
            return result[temp/2];

        }

    }
};