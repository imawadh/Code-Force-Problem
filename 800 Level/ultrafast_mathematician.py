#solved
str1 = input()
str2 = input()
for i in range(len(str1)):
    if(str1[i]==str2[i]):
        print(0,end='')
    else:
        print(1,end='')
        