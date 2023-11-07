//https://leetcode.com/problems/find-center-of-star-graph/description/
impl Solution {
    pub fn find_center(edges: Vec<Vec<i32>>) -> i32 {
       let a = edges[0][0];
       let b = edges[0][1];
       let mut returner = a;
       if edges[1][0] == b  {returner = b}; 
       if edges[1][1] == b  {returner = b};
       returner 
    }
}
