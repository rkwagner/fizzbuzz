#given a set of digits, find the sum of all N digit
#numbers whose each digit belongs to the given set of digits.

from itertools import product

#step 1: the query

nums = raw_input("Enter a string of single digits (space separated) to parse:").split(' ')

#step 2: how many digits do you want?

length = int(raw_input("Integer number length:"))

#step 3: tie it all together.

total = []

total.extend(product(nums, repeat=length))

newt = []

total = [int(toop) for toop in [''.join(top) for top in [list(tup) for tup in total]]]

print sum(total)
