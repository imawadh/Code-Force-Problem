test_cases  = int(input())
# Solved 
for i in range (test_cases):
    num = int(input())
    
    n = num//2
    sum1 = n*(n+1)
    # print()
    # print(sum1)
    sum2 = (n-1)*(n-1)
    # print(sum2)
    # print()
    if((sum1-sum2)%2==0):
        print("NO")
    else:
        print("YES")
        for i in range(n):
            print((i+1)*2,end=' ')
        for i in range(n-1):
            print((i+1)*2-1,end=' ')
        print(sum1-sum2)
        
       
        
        
        

    