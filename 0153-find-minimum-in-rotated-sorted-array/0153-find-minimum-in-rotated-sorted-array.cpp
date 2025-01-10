class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int n = nums.size();
        int high = n-1;
        int ans = INT_MAX;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[low]<=nums[mid]){
                ans=min(nums[low],ans);
                low=mid+1; //as left half is sorted we pick up the minimum  element and eliminate the left half
            }
            else{
                ans=min(ans,nums[mid]);
                high=mid-1; //right half is sorted so it is eliminated after picking up the lowest value
            }
        }
        return ans;
    }
};