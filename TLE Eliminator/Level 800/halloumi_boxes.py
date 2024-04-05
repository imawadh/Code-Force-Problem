
# Solved 
test_cases = int(input())
for i in range (test_cases):
    n,k = map(int,input().split())
    values = list(map(int,input().split()))
    flag = 1
    if k==1:
        for j in range(n-1):
            if(values[j]<=values[j+1]):
                continue
            else:
                flag = 0
                print("NO")
                break
        if(flag ==1):
            print("YES")
    else:
        print("YES")
    
