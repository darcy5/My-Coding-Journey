class Solution {
    
public:
    void findCombinations(int ind,int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //pick up the element
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            findCombinations(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }
        findCombinations(ind+1,target,arr,ans,ds);
    }
    
public:
    //given a function of vector of vectors
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //first declare a vector of vector to store ans
        vector<vector<int>> ans;
        vector<int> ds; //used in recursion to find combinations
        findCombinations(0,target,candidates,ans,ds);
        return ans;
    }
};