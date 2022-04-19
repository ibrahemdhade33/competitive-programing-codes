s = input()
c = 0
sm = 0
for i in s:
    if i.islower():
        sm += 1
    else:
        c += 1

if sm >= c:
    print(s.lower())
else:
    print(s.upper())
