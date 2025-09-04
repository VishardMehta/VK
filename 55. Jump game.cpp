class Solution {
public:
    bool canJump(vector<int>& nums) {
        int power = 0 ;
        for(int i = 0 ; i<nums.size();i++){
            if(i>power) return false;
            power=max(power,i+nums[i]);
        }
        return true ; 
    }
};
