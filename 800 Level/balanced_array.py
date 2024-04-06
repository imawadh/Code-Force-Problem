test_cases  = int(input())
# nosolved
for i in range (test_cases):
    num = int(input())
    n=num//2
    sumodd = 1
    sumeven =2
    a =1
    b =1
    while(a!=n):
        sumeven+=2
        a+=1
    while(b!=n):
        sumodd+=2
        b+=1
    print()

    if(sumeven!=sumodd):
        print("NO")
    else:
        print("YES")
        even = 2
        odd = 1
        while(even!=n):
            print(even,end = ' ')
            even+=2
        
        while(odd!=n+1):
            print(odd,end=' ')
            odd+=2