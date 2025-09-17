class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        if ( m > n ) return findMedianSortedArrays(nums2, nums1); //need 1st array as always the smaller array
        
        int low = 0, high = m;

        int left = (m + n + 1) >> 1;

        int total = m + n;

        while ( low <= high ){
            int mid1 = ( low + high) >> 1;
            int mid2 = left - mid1;

            int l1 = INT_MIN;
            int l2 = INT_MIN;
            int r1 = INT_MAX;
            int r2 = INT_MAX;

            if ( mid1 < m ) r1 = nums1[mid1];
            if ( mid2 < n ) r2 = nums2[mid2];
            if ( mid1 - 1 >= 0 ) l1 = nums1[mid1 - 1];
            if ( mid2 - 1 >= 0 ) l2 = nums2[mid2 - 1];

            if ( l1 <= r2 && l2 <= r1 ){
                if ( total % 2 == 1)  return max(l1,l2);
                return ((double)(max(l1,l2) + min(r1,r2))) / 2.0;
            }
            else if ( l1 > r2 ) high = mid1 - 1;
            else low = mid1 + 1;
        }
        return 0;
    }
};