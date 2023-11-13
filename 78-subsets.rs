
Pick a starting point.
while(Problem is not solved)
    For each path from the starting point.
        check if selected path is safe, if yes select it
        and make recursive call to rest of the problem
        before which undo the current move.
    End For
If none of the move works out, return false, NO SOLUTON.

impl Solution {
    pub fn subsets(nums: Vec<i32>) -> Vec<Vec<i32>> {
        let mut combo = vec![];
        let mut subset = vec![];
        Solution::cts(nums,&mut combo,subset,0);
        combo
    }
    fn create_subsets(nums: Vec<i32>,result:&mut Vec<Vec<i32>>,mut subset: Vec<i32>, index:i32){
        result.push(subset.clone());
        for i in (index as usize)..nums.len(){
            subset.push(nums[i]);
            Solution::create_subsets(nums.clone(), result, subset.clone(), (i+1) as i32);
            subset.pop();
        }
    }
}
