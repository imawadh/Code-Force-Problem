# solved 
val1,val2=map(int,input().split())
values = list(map(int,input().split()))
values.sort()
sum= 0
for i in range(val2):
    if(values[i]<0):
        sum-=values[i]
        
    else:
        break

print(sum)
