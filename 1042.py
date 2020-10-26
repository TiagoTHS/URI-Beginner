x = input().split()
l = []

for i in x:
    l.append(int(i))

l.sort()
for c in l:
    print(c)

print("")

for i in x:
    print(int(i))