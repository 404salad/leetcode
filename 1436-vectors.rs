impl Solution {
    pub fn dest_city(paths: Vec<Vec<String>>) -> String {
        let mut need = paths[0][0].clone();
        for _cities in 0..paths.len() {
            for cities in &paths {
                if cities[0] == need {
                    need = cities[1].to_string();
                }
            }
        }
        return need;
    }
}
