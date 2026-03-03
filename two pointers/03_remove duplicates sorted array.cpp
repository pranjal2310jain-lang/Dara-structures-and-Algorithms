//Sorted array given , remove duplicate elements form it.
// Time compplexity: O(n)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cm=1;
        int of=0;
        int count=1;

        while(cm<nums.size()){
            if (nums[cm]!=nums[of]){
                nums[of+1] = nums[cm];
                of++;
                count++;
            }
            cm++;
        }
        return count;
    }
};