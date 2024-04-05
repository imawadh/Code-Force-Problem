# Solved
test_cases = int(input())
for i in range(test_cases):
    a,b = map(int,input().split())
    values = list(map(int,input().split()))
    flag = 0
    for j in range (len(values)):
        if(values[j]==b):
            flag = 1
            break
    if(flag==1):
        print("YES")
    else:
        print("NO")