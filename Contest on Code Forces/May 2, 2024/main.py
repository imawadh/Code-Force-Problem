# solved 
test = int(input())
for i in range(test):
    num1,num2 = map(int,input().split())
    str1 = input()
    str2 = input()
    count = 0
    start  = 0
    for i in range(len(str1)):
        flag = False
        for j in range(start,len(str2)):
            # print(i,j,end=' ')
            if(str2[j]==str1[i]):
                start = j+1
                # print(i,j,start)
                flag=True
                count+=1
                break
        
        if(flag==False or start>=len(str2)):
            break
        
    print(count)