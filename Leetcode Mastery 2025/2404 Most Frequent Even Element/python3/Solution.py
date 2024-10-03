"""
2404. Most Frequent Even Element

Given an integer array nums, return the most frequent even
 element.
 
If there is a tie, return the smallest one. If there is no
 such element, return -1.

Example 1:
    input: nums = [0, 1, 2, 2, 4, 4, 1]
    output: 2

Example 2:
    input: nums = [4, 4, 4, 9, 2, 4]
    output: 4

Example 3:
    input: nums = [29, 47, 21, 41, 13, 37, 25, 7]
    output: -1
"""

"""
Submission Analysis
    Runtime: 217 ms
    Memory: 17.19 MB
"""

from collections import defaultdict
from typing import List

class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        nums_count_map = defaultdict(lambda: 0)
        most_freq_num = -1
        
        for num in nums:
            if num % 2 == 0:
                nums_count_map[num] += 1
                if nums_count_map[num] > nums_count_map[most_freq_num] or (nums_count_map[num] == nums_count_map[most_freq_num] and num < most_freq_num):
                    most_freq_num = num
        return most_freq_num

    # Example 1
    print('\nExample 1)')
    nums = [0, 1, 2, 2, 4, 4, 1]
    print('nums:', nums)
    print('mostFrequentEven(nums):', mostFrequentEven(True, nums))
    
    # Example 2
    print('\nExample 2)')
    nums = [4, 4, 4, 9, 2, 4]
    print('nums:', nums)
    print('mostFrequentEven(nums):', mostFrequentEven(True, nums))
    
    # Example 3
    print('\nExample 3)')
    nums = [29, 47, 21, 41, 13, 37, 25, 7]
    print('nums:', nums)
    print('mostFrequentEven(nums):', mostFrequentEven(True, nums))