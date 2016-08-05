#given a set of digits, find the sum of all N digit
#numbers whose each digit belongs to the given set of digits.

from itertools import product

#step 1: the query

nums = raw_input("Enter a string of single digits (space separated) to parse:").split(' ')

#step 2: how many digits do you want?

length = int(raw_input("Integer number length:"))

#step 3: tie it all together.

total = []

#create a list of tuples of all permutations (with repetition) of the numbers in the input list.
#this can be modified by switching to itertools.combination, and removing the user choice to select length.
#that would make it the sum of all numbers (no repetition) of the same length as the input list,
#where all numbers are in the list.

total.extend(product(nums, repeat=length))

#convert list of tuples to list of lists, convert to list of strings, then to list of ints.

total = [int(''.join(list(tup))) for tup in total]
#total = [int(toop) for toop in [''.join(top) for top in [list(tup) for tup in total]]]

#get the sum of all list members.

print sum(total)
