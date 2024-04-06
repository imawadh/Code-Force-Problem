# solved 
num = int(input())
values = list(map(int,input().split()))
min = values[0]
for i in range(len(values)):
    values[i]=abs(values[i])
values.sort()
print(values[0])



