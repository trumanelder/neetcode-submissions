class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int longest = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]) count++;
            if(count > longest) longest = count;
            if(!nums[i]) count = 0;
            
        }
        return longest;
    }
};