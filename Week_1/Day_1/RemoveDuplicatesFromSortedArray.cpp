class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p , r;
        int n = nums.size();
        p = 0;
        for(int i = 1; i < n ;i++){
            if(nums[i] != nums[p]){
                p++;
                nums[p] = nums[i];
            }
        }
        return p + 1;
    }
};
