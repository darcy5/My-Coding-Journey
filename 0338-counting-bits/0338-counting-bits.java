class Solution {
    public int[] countBits(int n) {
        int[] ans= new int[n+1];
        
        for(int i=n; i>0;i--){
            int count=0;
            int currValue=i;
            while(currValue!=0){
                currValue= (currValue & currValue-1);
                count++;
            }
            ans[i]=count;
        }
        
        return ans;
    }
}



