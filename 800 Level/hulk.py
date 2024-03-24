# solved
num = int(input())
number = 1
str = 'I hate '
while(number!=num):
    
    if(number%2==1):
        str+='that I love '
    else:
        str+='that I hate '
    number+=1

print(str+'it')