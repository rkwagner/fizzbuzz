import re, string

regex = re.compile('[^a-zA-Z]')
x = raw_input("Enter phrase to check for palindrome: ")

#figure out if the current string is a palindrome using a naive reversal.
#alternatively, punctuation could be handled by stripping the string
#of all characters that are not a-zA-Z1-9

retval = regex.sub('', x)
if retval == retval[::-1]:
    print retval, " is a palindrome.\n" 
else:
    print("Not a palindrome.\n")
