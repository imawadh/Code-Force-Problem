t  = int(input())
#Solved
for i in range (t):
    a,b = map(int, input().split())
    if(a==b):
        print(0)
    elif(a>b):
        a-=b
        if(a%10==0):
            print(a//10)
        else:
            print(a//10+1)
    else:
        b -=a
        if(b%10==0):
            print(b//10)
        else:
            print(b//10+1)