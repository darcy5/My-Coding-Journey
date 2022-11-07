class Solution {
    public int maxSubArray(int[] nums) {
         int result=Integer.MIN_VALUE, sum = 0;
        for(int num:nums){
            sum =Math.max(num, sum+num);
            result = Math.max(result, sum);
        }
        return result;
    }
}