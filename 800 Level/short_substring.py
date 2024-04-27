test_cases = int(input())
# not solved 
for i in range(test_cases):
    str = input()
    answer =" "
    index = 0
    for j in range(len(str)):
        if str[j]!=answer[index]:
            answer =answer + str[j]
            index+=1

    print(answer.lstrip())
    
    
        