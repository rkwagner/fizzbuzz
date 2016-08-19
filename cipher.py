#goal: create a simple cipher that modifies each initial character by its index.
#strategy: string[i] += (string[i] + i) & 0'b11111111 (255)
#execution:

#current issue: str and int manipulation, need to learn how to bitmask in python.

fname = 'encode.txt'
target = open('decode.txt', 'w')
content = []
with open(fname) as f:
    content = f.readlines()

c = []
for f in content:
    str = ""
    for p in range(len(f)):
        c = ((f[p]+p)&255)
        str += c
    c.append(str)
    target.write(str)

