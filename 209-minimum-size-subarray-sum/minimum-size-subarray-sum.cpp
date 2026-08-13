class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int sum=0;
        int size=INT_MAX;
        for(int h=0;h<nums.size();h++){
            sum=sum +nums[h];
            while(sum>=target){
                sum-=nums[l];
                size=min(size,h-l+1);
                l++;
            }
        }
        if(size==INT_MAX){
            size=0;
        }
        return size;
    }
};