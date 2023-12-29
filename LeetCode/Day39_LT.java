/*Given an array of positive integers nums and a positive integer target, return the minimal length of a 
subarray
 whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.

Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1

Example 3:

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0*/

class Solution {
    public int minSubArrayLen(int target, int[] nums) {
         int n = nums.length;
        int sum = 0;
        int i = 0,j=0,res = Integer.MAX_VALUE;

        while(i<n && j<n){
            sum = sum + nums[i];
            if(sum >= target){
                res = Math.min(res,i-j+1);
                sum = sum - nums[j];
                j++;
                while(j<=i && sum >=target){
                    res = Math.min(res,i-j+1);
                    sum = sum - nums[j];
                    j++;
                }
            }
            i++;
        }
        return res == Integer.MAX_VALUE ? 0 : res;
    }
}