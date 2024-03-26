cases = int(input())
# Solved
for i in range(cases):
    num = int(input())
    if(num==0 or num==1):
        print(0)
    elif(num%2==0):
        print((num-1)//2)
    else:
        print(num//2)
