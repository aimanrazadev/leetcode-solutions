class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int actualsum = n * (n + 1) / 2;
    int sumofarray = 0;
    for(int i =0; i<n; i++){
        sumofarray+=nums[i];
    } return actualsum-sumofarray;
    }
};
