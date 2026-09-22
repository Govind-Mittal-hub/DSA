class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int i;
        int j=-1;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        i=j+1;
        if(j==-1){
            return;
        }
        while(i<nums.size()){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else{
                i++;
            }

        }
        
    }
};