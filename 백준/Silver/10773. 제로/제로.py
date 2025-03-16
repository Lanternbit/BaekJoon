k = int(input())
stack = []
ans = 0

for i in range(k):
    n = int(input())

    if n == 0:
        stack.pop()
    else:
        stack.append(n)

for i in range(len(stack)):
    ans += stack[i]

print(ans)