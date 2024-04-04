# Solved
test_cases = int(input())
for i in range(test_cases):
    str = input()
    sum1 = 0
    sum2 = 0
    for j in range(3):
        a = int(str[j])
        sum1+=a
    for j in range(3,6):
        a = int(str[j])
        sum2+=a

    if(sum1==sum2):
        print("YES")
    else:
        print("NO")