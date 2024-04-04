# solved 
number_of_citizen =int(input())
values = list(map(int,input().split()))
values.sort()
sum  = 0
for i in range(number_of_citizen):
    sum = sum+ values[number_of_citizen-1]-values[i]
print(sum)