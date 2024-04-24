# not solved
a,b= map(int,input().split())
answer = a
while(a>=b):
    answer = answer + a//b
    a = a//b

print(answer)
