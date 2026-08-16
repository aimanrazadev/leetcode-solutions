class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int firstele = 0;
        for (int i = 1; i<nums.size(); i++){
            if (nums[firstele] != nums[i]){
                firstele++;
                nums [firstele] = nums[i];
            }
        } return firstele+1;
        
    }
};
