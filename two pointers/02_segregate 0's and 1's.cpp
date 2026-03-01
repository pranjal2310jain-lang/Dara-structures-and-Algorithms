//Time complexity: O(n)
//Space compleity: O(1)
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n=arr.size();
        int left=0,right=n-1;
        while(left<right){
            if(arr[left]==0){
                left++;
            }
            else if(arr[right]==1){
                right--;
            }
            else{
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
        }
    }
};