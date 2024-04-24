# solved 
num = int(input())
str = input()
count0=0
count1=0
for i in range(len(str)):
    if(str[i]=='0'):
        count0+=1
    else:
        count1+=1
    
# print(count0,count1)
print(abs(count1-count0))