


pub fn contains_duplicate(nums: Vec<i32>) -> bool {
    
    let mut nums = nums;
    
    nums.sort();
    
    for i in 0..nums.len() - 1 {
    
        if nums[i] == nums[i + 1] {
    
            return true;
    
        }
    
    }
    
    false
    
}


//O(n) time, O(1) space using a hashset
pub fn contains_duplicate(nums: Vec<i32>) -> bool {
    
    let mut set = HashSet::new();
    
    for i in 0..nums.len() {
    
        if set.contains(&nums[i]) {
    
            return true;
    
        }
    
        set.insert(nums[i]);
    
    }
    
    false
    
}