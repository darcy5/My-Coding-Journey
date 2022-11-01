class Solution {
    public boolean isPowerOfFour(int n) {
        if(n==1) return true;
        boolean containsSingleSetBit=(n &(n-1))==0;
        boolean containsFourOrSixInZerothPlace= (n%10==4) || (n%10==6);
        return containsSingleSetBit && containsFourOrSixInZerothPlace;
    }
}