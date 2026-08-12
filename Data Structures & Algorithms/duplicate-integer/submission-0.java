class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap<Integer, Integer> tracker = new HashMap<Integer, Integer>();
        for (int num : nums) {
            if (tracker.get(num) == null) {
                tracker.put(num, 1);
            } else {
                return true;
            }
        }
        return false;
    }
}

/* 

Hashmap (number, count)

On new number, 
check for existing entry, 
if exists return true
else create new entry
return false if iterates through

*/