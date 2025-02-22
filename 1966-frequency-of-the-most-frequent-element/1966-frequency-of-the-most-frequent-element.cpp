class Solution {

    int bSearch(int target_idx,int k,vector<int>& nums, vector<long>& prefixSum){

        int target = nums[target_idx];

        int left = 0;

        int right = target_idx;

        int best_idx = target_idx;

        while(left <= right){
            int mid = left+(right-left)/2;
            long count = target_idx-mid+1;
            long windowSum = count*target;
            long currSum = prefixSum[target_idx]-prefixSum[mid]+nums[mid];

            int ops = windowSum-currSum;

            if(ops > k){
                left = mid+1;
            }
            else {
                best_idx = mid;
                right = mid-1;
            }
        }
        return target_idx - best_idx + 1;
    }
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();

        sort(begin(nums),end(nums));

        vector<long> prefixSum(n);
        prefixSum[0] = nums[0];
        for (int i=1; i<n; i++){
            prefixSum[i] = prefixSum[i-1]+nums[i];
        }

        int result = 0;
        for(int target_idx=0; target_idx<n; target_idx++){
            result = max(result, bSearch(target_idx,k,nums,prefixSum));
        }
        return result; 
    }
};