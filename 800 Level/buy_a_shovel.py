# solved 
a , b = input().split()
a  =int(a)
b = int(b)
i = 1
while (a*i)%10!=0 and (a*i)%10!=b:
    i+=1

print(i)
'''
In the corrected version of the code, the and operator is used in the while loop condition instead of or because we want to ensure that both conditions are true for the loop to continue iterating.

Let's break down the logic:

(a * i) % 10 != 0: This condition ensures that the result of (a * i) is not divisible by 10, which means that there's no "overflow" in terms of the 10-burle coins. We want to ensure that the total amount is not just a multiple of a but also divisible by 10, so it can be paid using the 10-burle coins without needing the r burle coin.

(a * i) % 10 != b: This condition ensures that the result of (a * i) is not equal to b, meaning it's not just a multiple of a but also doesn't equal the remaining amount to be paid, b. This is to ensure that Polycarp doesn't have to use the r burle coin to make the payment.

Using the and operator ensures that both conditions must be true for the loop to continue. If either condition is false, the loop stops, and the program proceeds to print the value of i, which represents the minimum number of shovels Polycarp needs to buy to pay without any change.






'''