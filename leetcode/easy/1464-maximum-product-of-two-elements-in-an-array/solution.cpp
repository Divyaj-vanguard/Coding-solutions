class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,j,max1=INT_MIN, max2=INT_MIN;
        for(i=0;i<nums.size();i++){
            if (nums[i]>max1){
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2){
                max2=nums[i];
            }
            }
        
        return (max1-1)*(max2-1);
    }
};