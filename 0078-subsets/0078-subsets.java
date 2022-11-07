class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        int n=nums.length;
        List<List<Integer>> list = new ArrayList<>();
        for(int i=0;i<(1<<n);i++){
            List<Integer> sub = new ArrayList<>();
            for(int j=0;j<nums.length;j++){
                if((i>>j & 1) !=0) 
                sub.add(nums[j]);
            }
            list.add(sub);
        }
        
        return list;
    }
}

