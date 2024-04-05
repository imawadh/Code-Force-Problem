# Solved 
test_cases =int(input())
for i in range(test_cases):
    a,b,c = map(int,input().split())
    if(a+b==c):
        print('+')
    else:
        print('-')