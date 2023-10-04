class Solution:
    def duplicates(self, arr, n): 
    	# code here
        seen = set()
        duplicates = set()

        for num in arr:
            if num in seen:
                duplicates.add(num)
            else:
                seen.add(num)

        if not duplicates:
            return [-1]
        else:
            return sorted(list(duplicates))

