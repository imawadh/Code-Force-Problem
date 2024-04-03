# solved
t = int(input())

for i in range(t):
    a =int(input())
    user_input = list(map(int, input().split()))
    user_input.sort()
    flag = 1
    for j in range(1,len(user_input)):
        if(user_input[j]-user_input[j-1]>1):
            flag = 0
            break
    if(flag==1):
        print("YES")
    else:
        print("NO")