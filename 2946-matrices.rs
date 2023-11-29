impl Solution {
    pub fn are_similar(mat: Vec<Vec<i32>>, k: i32) -> bool {
        let mut matrix = mat.clone();
        // modify matrix and check with mat
        //let mut k = k % (mat[0].len() as i32);
      
        for e in &mat {
            println!("{:?}",*e);
        }
        
        for _k in 0..k{
            for row in 0..matrix.len() {
                if row%2==0 {
                    let temp = matrix[row][0];
                    for col in 0..matrix[0].len()-1 {
                        matrix[row][col] = matrix[row][col+1];
                    }
                    matrix[row][mat[0].len()-1] = temp;
                }
                else {
                    let temp = matrix[row][mat[0].len()-1];
                    for col in (1..=matrix[0].len()-1).rev() {
                        matrix[row][col] = matrix[row][col-1];
                    }
                    matrix[row][0] = temp;
                }
            }
        }
        for e in &matrix {
            println!("{:?}",*e);
        }
        for row in 0..mat.len(){
            for col in 0..mat[0].len(){
                if mat[row][col]!=matrix[row][col] {
                    return false;
                }
            }
        }
        return true;
    }
}
