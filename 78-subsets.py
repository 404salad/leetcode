class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ret = []
        subset = []

        def dfs(i):
            # base case
            if(i>=len(nums)):
                ret.append(subset.copy())
                return

            # include
            subset.append(nums[i])
            dfs(i+1)

            # exclude
            subset.pop()
            dfs(i+1)

        dfs(0)
        return ret
