n = int(input())

a = list(map(int, input().split()))

c = 0
p = 0

for i in range(n):
    if a[i] == -1:
        if p > 0:
            p -= 1
        else:
            c += 1
    else:
        p += a[i]

print(c)

