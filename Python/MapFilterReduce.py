"""
1. filter ---> Filters data in a sequence as per the given function
2. map ---> updates a given sequence as per the given function
3. reduce --> reduces the data of a sequence to one piece
"""

from functools import reduce


def func(m, n):
	return m + n


nums = [1, 2, 4, 5, 9]      # 3 6 9 14
new_num = reduce(func, nums)
new_num_ = sum(nums)

print(new_num)
print(new_num_)
print(new_num == new_num_, new_num is new_num_)

print(__doc__)
