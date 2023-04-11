
s = input()

b = {}
r = {}
k = 0

for i in range(0,len(s)) :
    if(s[i]=='B'):
        b.update({i:s[i]})
    if(s[i]=='R'):
        r.update({i:s[i]})
    if(s[i]=='K'):
        k = i
    
if((list(b)[0]%2)!=(list(b)[1]%2) and list(r)[0]<k and list(r)[1]>k):
    print("Yes")
else:
    print("No")