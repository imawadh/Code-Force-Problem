a,b = map(int,input().split())
values = list(map(int,input().split()))
i = 0
j = len(values)-1
values.sort()
min = values[j]
count = 0
while(i<len(values)-a):
    if(min<values[i+a]-values[i]):
            min = values[i+a]-values[i]
            i+=1    
            
print(min)
