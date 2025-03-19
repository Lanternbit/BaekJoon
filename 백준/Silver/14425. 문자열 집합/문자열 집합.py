n, m = map(int, input().split(" "))

string_set = set()
ans = 0

for i in range(int(n)):
    string = input()
    string_set.add(string)

for i in range(int(m)):
    word = input()
    check = word in string_set

    if check == True:
        ans += 1

print(ans)