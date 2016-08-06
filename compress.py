#Run-length encoding.
#given compression format 2a3b3c=aabbbccc
#compress arbitrary strings.


def compress(string):
    compressed = ""
    count = 1
    for i in range(len(string)):
        if i<len(string)-1 and string[i] == string[i+1]:
            count += 1
        else:
            compressed += str(count) + string[i]
            count = 1
    return compressed

print compress(raw_input("Enter an input string to compress:"))
