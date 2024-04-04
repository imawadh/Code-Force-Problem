# Solved
test_cases = int(input())
for i in range (test_cases):
    size = int(input())
    values = list(map(int,input().split()))
    my_list = values
    values= tuple(values)
    my_list.sort()
    differnt = 0
    if(my_list[0]==my_list[1]):
        differnt=my_list[-1]
    else:
        differnt=my_list[0]

    for j in range (size):
        if(values[j]==differnt):
            print(j+1)
            break