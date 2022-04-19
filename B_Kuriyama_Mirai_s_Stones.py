l = []
l1 = []
l2 = []
n = int(input())
sum = 0
l = list(map(int, input().split(' ')))
l.insert(0, 0)
s = 0
for i in l:
    s += i
    l1.append(s)
s = 0
l.sort()
for i in l:
    s += i
    l2.append(s)

m = int(input())
for i in range(m):
    temp = list(map(int, input().split(' ')))
    if temp[0] == 1:
        print(l1[temp[2]] - l1[temp[1]-1])
    else:
        print(l2[temp[2]] - l2[temp[1]-1])
