# solved 
test_cases = int(input())
for i in range(test_cases):
    num = int(input())
    count = 0
    number = 0
    while (count!=num):
        number+=1
        if(number%3==0 or number%10==3):
            count=count
        else:
            count+=1
    print(number)