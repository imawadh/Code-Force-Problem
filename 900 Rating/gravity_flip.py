#solved


num = int(input())
values = list(map(int,input().split()))
values.sort()
for i in range(len(values)):
    print(values[i],end= ' ')