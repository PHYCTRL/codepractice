a, b = map(int, input().split())

b_lstd = list(map(int, str(b))) # listed b

print(a*b_lstd[2])
print(a*b_lstd[1])
print(a*b_lstd[0])
print(a*b)
