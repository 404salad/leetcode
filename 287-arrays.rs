impl Solution {
    pub fn find_duplicate(nums: Vec<i32>) -> i32 {
        let mut max = nums[0];
        let mut count = vec![];
        for num in &nums {
            if num>&max { max = *num;} 
        }
        for i in 0..=max {
            count.push(0);
        }
        for num in &nums {
            if count[*num as usize]==1 {
                return *num;
            }
            else {
                count[*num as usize]+=1;
            }
        }
        return -1;
    }
}
