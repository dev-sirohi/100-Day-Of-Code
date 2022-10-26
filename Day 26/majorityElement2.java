// My Solution

class Solution {
    public List<Integer> majorityElement(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        List<Integer> list = new ArrayList();
        int limit = nums.length / 3;
        
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(nums[i])) {
                map.put(nums[i], map.get(nums[i]) + 1);
            } else {
                map.put(nums[i], 1);
            }
        }
        
        Iterator itr = map.entrySet().iterator();
        
        while (itr.hasNext()) {
            Map.Entry mapElement = (Map.Entry)itr.next();
            if ((int)mapElement.getValue() > limit) {
                list.add((int)mapElement.getKey());
            }
        }
        
        return list;
    }
}

//Optimised solution

//To be done
