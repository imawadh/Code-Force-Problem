# NOt Solved 
test = int(input())
for i in range(test):
    n,k,x = map(int,input().split())
    sum = 0
    start = 1
    while(k>0):
        if(sum==n):
            print("YES")
            break
        if(k==x):
            continue
        
        n = n%k
        k = n
        sum = sum + n*

        

