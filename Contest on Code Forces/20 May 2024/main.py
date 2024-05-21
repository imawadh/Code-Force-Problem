test = int(input())
for i in range(test):
    a,b = map(int,input().split())
    answer = 0
    if(b%2==0):
        answer = answer + b//2
        b = 7*answer
    else:
        answer = answer + b//2 + 1
        b = 7*answer + 4
    
    
    if(b>=a):
        print(answer)
    else:
        a = a- b
        if(a%15==0):
            answer = answer + a//15
        else:
            answer = answer + a//15 + 1
        print(answer)
