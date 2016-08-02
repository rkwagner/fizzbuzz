import re, string

regex = re.compile('[^a-zA-Z]')
x = raw_input("Enter phrase to check for palindrome: ")

retval = regex.sub('', x)
if retval == retval[::-1]:
    print retval, " is a palindrome.\n" 
else:
    print("Not a palindrome.\n")
