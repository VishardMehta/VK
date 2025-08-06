class Solution {
public:
    void sortColors(vector<int>& nums) {
        // dutch's national flag algo
        // 3 pointer approach 
        // 0's [0 to low-1] 1's[low to mid-1] unsorted 0/1/2 [mid to high]  2's [high+1 to n-1]
        int low = 0 ;
        int mid = 0 ;
        int high = nums.size()-1 ;
        while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    }
};
