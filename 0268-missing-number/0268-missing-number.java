class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;
        int sumOfNaturalNumbers=(n*(n+1))/2;
        int total=0;
        for(int i:nums) total+=i;
        return sumOfNaturalNumbers - total;
    }
}

