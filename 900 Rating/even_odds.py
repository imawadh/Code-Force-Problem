# Solved 
a,b = map(int,input().split())
if(a%2==0):
    if(b<=a//2):
        print(1+(b-1)*2)
    else:
        b = b - a//2
        print(2+(b-1)*2)
    
else:
    if(b<=((a//2)+1)):
        print((1+(b-1)*2))
    else:
        b = b - a//2 - 1
        print(2+(b-1)*2)

