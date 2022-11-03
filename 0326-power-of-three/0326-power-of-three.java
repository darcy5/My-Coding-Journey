class Solution{
public boolean isPowerOfThree(int n) {
        if(n==0)
            return false;
        long x = Math.round(Math.log(n)/Math.log(3));
        return Math.pow(3,x) == n;
    }
}