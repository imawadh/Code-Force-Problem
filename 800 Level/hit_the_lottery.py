list = [100,20,10,5,1]
# Solved
total = 0
a = int(input())
for i in list:
    total =total + a//i
    a %= i
print(total)