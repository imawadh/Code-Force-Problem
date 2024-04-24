# not solved 
test =  int(input())
for i in range(test):
    num1 ,num2 = map(int,input().split())
    values = list(map(int,input().split()))
    sum = 0
    if(num1==2):
        for i in range(0,len(values),2):
            sum+=values[i]

    else:
        values.reverse()
        # solution remaing
        
    print(sum)