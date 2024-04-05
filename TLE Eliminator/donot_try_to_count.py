# Solved 
test_cases = int(input())
for i in range(test_cases):
    num1 ,num2 = map(int,input().split())
    str1 = input()
    str2 = input()
    count = 0
    while(len(str1)<len(str2)):
        str1+=str1
        count+=1
    
    if str2 in str1:
        print(count)
    elif str2  in (2*str1):
        print(count+1)
    else:
        print(-1)
