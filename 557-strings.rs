impl Solution {
    pub fn reverse_words(s: String) -> String {
        let mut ans = String::from("");
        for a in s.split(" ") {
            ans.push_str(&a.chars().rev().collect::<String>());         
            ans.push(' ');
        }
        ans.pop();
        ans
    }
}

