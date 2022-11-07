class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet h = new HashSet<>();
        for(int i : nums){
            if(h.add(i) == false){
                return true;
            }
        }
        return false;
    }
}