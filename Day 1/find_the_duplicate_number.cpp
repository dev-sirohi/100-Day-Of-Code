class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        
        do { //using do-while because at the first step slow == fast so this makes it easier
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (fast != slow); // since it is given that there definetly is a loop (duplicate)
        
        fast = nums[0];
        
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
    }
};

/*

Approach 1: Just sort it! (very slow)

sort(nums.begin(), nums.end());
        
        int val;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) val = nums[i];
        }
    
        return val;
        

Approach 2: using set (slower than sort)
unordered_set<int> s;
        
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end()) {
                return nums[i];
            }
            
            s.insert(nums[i]);
        }
        
        return -1;
        
        
Approach 3: using Floyd's loop detection algorithm. (fastest)
int slow = nums[0];
        int fast = nums[0];
        
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (fast != slow); // since it is given that there definetly is a loop (duplicate)
        
        fast = nums[0];
        
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
    }

*/
