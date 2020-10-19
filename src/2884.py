h, m = input().split()

h = int(h)
m = int(m)

m -= 45

if m < 0:
    h -= 1
    m += 60

if h == -1:
    h = 23

print(h, end=' ')
print(m)
