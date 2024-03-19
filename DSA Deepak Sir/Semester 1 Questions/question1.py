number_of_element_in_a_list = int(input("Enter a Number : "))
list = []
sum  = 0
for i in range(number_of_element_in_a_list):
    a = int(input(f"Enter Number {i} : "))
    sum+=a
    list.append(a)
    print(list)
    print(min(list),max(list),sum,sum/len(list))