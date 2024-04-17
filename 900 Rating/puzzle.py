# Solved 
a,b = map(int,input().split())
values = list(map(int,input().split()))
values.sort()

min = values[-1]
for i in range(len(values)-a+1):
    dif = values[i+a-1]-values[i]
    if(dif<min):
        min = dif
print(min)
