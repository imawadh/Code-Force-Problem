# Solved
test = int(input())
for i in range(test):
    a,b = map(int,input().split())
    if(a%b==0):
        c = a//b
        print(2)
        print((c-1)*b-1,a-((c-1)*b-1))
    else:
        print(1)
        print(a)