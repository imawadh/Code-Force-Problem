test = int(input())
# Solved 
for i in range(test):
    a,b,c = map(int,input().split())
    answer = 0
    if(b<=c/2):
        answer = answer + b*a
    else:
        if(a%2==0):
            answer = answer + a//2*c
        else:
            answer = answer + a//2*c + b
    print(int(answer))        