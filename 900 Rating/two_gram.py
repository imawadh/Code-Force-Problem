num = int(input())
str = input()
answer = ''
count_answer = 0
for i in range(len(str)-1):
    count = 0
    # check = 
    for j in range(len(str)-1):
        if(str[j:j+2]==str[i:i+2]):
            count+=1

    if(count_answer<count):
        count_answer=count
        answer=str[i:i+2]

print(answer)


