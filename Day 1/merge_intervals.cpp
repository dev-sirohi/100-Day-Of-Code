class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Sorting the vector
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        
        for (int i = 1; i < intervals.size(); i++) {
            if (ans.back()[1] >= intervals[i][0]) {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            } else {
                ans.push_back(intervals[i]);
            }
        }
        
        return ans;
        
    }
};

/*

Initial approach:

I tried doing the same thing but instead of making a new vector and keeping the first element in it,
I ended the iterator one element before the last one in intervals and checked for i and i + 1 for each.
This created problems. I am sure there is a solution that way also, but this is shorter and less complicated.

*/
