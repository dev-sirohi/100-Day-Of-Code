class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if (n == 0) return;
        
        if (m == 0) {
            for (int i = 0; i < n; i++) {
                nums1[i] = nums2[i];
            }
            return;
        }
        
        int p1 = m - 1;
        int p2 = n - 1;
        int p3 = m + n - 1;
        
        while (p1 > -1 && p2 > -1) {
            if (nums2[p2] >= nums1[p1]) {
                nums1[p3--] = nums2[p2--];
            } else {
                nums1[p3--] = nums1[p1--];
            }
        }
        
        if (p2 > -1) {
            while (p3 > -1) {
                nums1[p3--] = nums2[p2--];
            }
        }
    }
};

/*

Simply sorting is actually faster.

for(int i = 0 ; i < n ; i++)
            nums1[i + m] = nums2[i];
            sort(nums1.begin() , nums1.end());
    return;
    
    
*/
