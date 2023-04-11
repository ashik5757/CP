
ln = input()

h,w = list(map(int,ln.split(' ')))


for j in range(0,h):
    s = input()
    
    for i in range(0,w-1):

        if(i<w-1 and s[i]==s[i+1]=='T'):
            s = s[:i] + "PC" + s[i+2:]
    print(s)

