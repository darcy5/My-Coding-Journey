class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n = nums.size();
        map <int, int> mpp;
        for (int i = 0; i < n; i++){
            mpp[nums[i]]+=1;
        }
        
        vector<int> result;
        for (auto& it : mpp){ //& to avoid unnecessary copies
            if(it.second == 1){
                if(mpp.count(it.first-1)==0 && mpp.count(it.first+1)==0){
                    result.push_back(it.first);
                }
            }
        }
    return result;
        
    }
};