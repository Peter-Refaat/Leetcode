class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int cntr = 0;
        do {
            cntr++;
        }while(next_permutation(nums.begin(),nums.end()) and cntr < 1);
    }
};
