import numpy as np
import math
for _ in range(int(input())):
    x1, p1 = map(np.float256, input().split())
    x2, p2 = map(np.float256, input().split())
    x1 *= math.pow(10, p1)
    x2 *= math.pow(10, p2)
    if x1 > x2:
        print(">")
    elif x1 == x2:
        print("=")
    else:
        print("<")
