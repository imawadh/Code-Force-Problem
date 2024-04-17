# solved 
num = int(input())
if(num>=0):
    print(num)
else:
    num = abs(num)
    lastdigit = num%10
    lastseconddigit= (num%100-lastdigit)//10
    
    if(lastseconddigit>lastdigit):
        num=num//100
        num*=10
        num+=lastdigit
    else:
        num//=10
    print(-1*num)