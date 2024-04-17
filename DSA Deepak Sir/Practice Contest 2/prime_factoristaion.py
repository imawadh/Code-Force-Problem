import math
num = int(input())
val = 2
# for i in range(2,int(math.sqrt(num))):
#         print(i)
str = ''
while(num!=1):
    for i in range(val,num+1):
        if(num%i==0):
            while(num%i==0):
                str += f'{i}*'
                num//=i

print(str.rstrip('*'))