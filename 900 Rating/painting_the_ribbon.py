# not solved 
test = int(input())
for i in range(test):
    a,b,c = map(int,input().split())
    
    d =  a//b
    if(d>=c):
     print("Yes")
    else:
            print("No")