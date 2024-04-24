# Solved
char = input()
str = input()
str1 = "qwertyuiop"
str2 = 'asdfghjkl;'
str3 = 'zxcvbnm,./'
if(char=='R'):
    for i in range(len(str)):
        if str[i] in str1:
            index = str1.index(str[i])
            print(str1[index-1],end='')
        elif str[i] in str2:
            index = str2.index(str[i])
            print(str2[index-1],end='')
        else:
            index = str3.index(str[i])
            print(str3[index-1],end='')
else:
    for i in range(len(str)):
        if str[i] in str1:
            index = str1.index(str[i])
            print(str1[index+1],end='')
        elif str[i] in str2:
            index = str2.index(str[i])
            print(str2[index+1],end='')
        else:
            index = str3.index(str[i])
            print(str3[index+1],end='')