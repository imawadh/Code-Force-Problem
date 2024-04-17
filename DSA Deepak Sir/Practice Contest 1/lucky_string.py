# solved 
num = int(input())
val = num//4
str = 'abcd'*val
val2 = num%4
if val2!=0:
    if(val2==1):
        str+='a'
    elif(val2==2):
        str+='ab'
    else:
        str+='abc'
print(str)

