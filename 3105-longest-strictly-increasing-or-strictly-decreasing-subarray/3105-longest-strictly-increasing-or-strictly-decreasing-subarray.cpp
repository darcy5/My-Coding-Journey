class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        //using brute force approach as n is within 1 and 50
        int n=nums.size();
        int longestLength=1; //as n is minimum 1

        for(int i=1 ; i<=n-1; i++){
            int length=1; //minimum should be 1 as per given constraints
            for (int j=1;j<=i;j++){
                if(nums[j-1]<nums[j]){
                    length ++ ;
                }
                else{
                    longestLength = max(longestLength, length);
                    length=1; //again change the value of length = 1 so that new iteration starts from 1
                }
            }
            longestLength = max(longestLength, length); //case where full array increases
        }

        for(int i=1 ; i<=n-1; i++){
            int length=1; //minimum should be 1 as per given constraints
            for (int j=1;j<=i;j++){
                if(nums[j-1]>nums[j]){
                    length ++;
                }
                else{
                    longestLength = max(longestLength, length);
                    length=1; //again change the value of length = 1 so that new iteration starts from 1
                }
            }
            longestLength = max(longestLength, length); //case where full array decreases
        }
        return longestLength;
    }
    
};

//tc = O(n^2)
//sc = O(1)