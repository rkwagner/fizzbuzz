#Given string S and a set of characters, find the smallest subset of
#S containing all members of the set.

S = raw_input("Enter a string to search:")
chars = raw_input("Enter a sequence of characters, separated by whitespace:").split(' ')

substr = S[:]
for i in range(0, len(S)):
    print "Chars initially", chars, "for i =", i
    if S[i] in chars:
        temp = chars[:]
        print "Removing", S[i], "From", temp
        temp.remove(S[i])
        for j in range(i+1, len(S)):
            if S[j] in temp and len(temp) > 0:
                print "Removing", S[j], "From", temp
                temp.remove(S[j])
            if len(temp) == 0:
                if j-i<len(substr):
                    substr = S[i:(j+1)]
                
                break

print "Substring of", S, "is", substr, "length", len(substr)

