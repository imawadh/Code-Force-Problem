# Solved 
a,b = map(int,input().split())
sum1 = b
sum2 = 3
flag = False
for i in range(a):
    for j in range(b):
        if(i%2==0):
            print('#',end='')
            
        elif j==b-1:
         if i+j == sum1:
            sum1+=4
            print('#',end='')
         else:
             print('.',end='')
            
        elif j==0:
         if i+j == sum2:
                sum2+=4
                print('#',end='')
         else:
             print('.',end='')
            

        else:
            print('.',end='')
    print()    
