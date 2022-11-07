class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        HashSet<String> set = new HashSet<>();
        List<List<Integer>> list = new ArrayList<>();
        for(int i=0;i<(1<<n);i++){
            String setVal = "";
            List<Integer> sub = new ArrayList<>();
            for(int j=0;j<n;j++){
                if(((i>>j)&1)!=0){
                sub.add(nums[j]);
                setVal += nums[j] ;
                } 
            }
            if(set.add(setVal)) list.add(sub);
        }
        return list;
    }
}