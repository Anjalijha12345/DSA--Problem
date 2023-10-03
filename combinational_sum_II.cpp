// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

 

// Example 1:

// Input: candidates = [10,1,2,7,6,1,5], target = 8
// Output: 
// [
// [1,1,6],
// [1,2,5],
// [1,7],
// [2,6]
// ]

class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        output = []
        stack = []

        def backtrack(i, total=0):
            if total == target:
                output.append(stack.copy())
                return

            if i >= len(candidates) or total > target:
                return
            
            stack.append(candidates[i])
            backtrack(i+1, total+candidates[i])

            stack.pop()
            while i+1 < len(candidates) and candidates[i] == candidates[i+1]:
                i += 1
            
            backtrack(i+1, total)
        
        backtrack(0)
        return output
