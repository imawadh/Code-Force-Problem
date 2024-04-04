# Solved 
number_of_cards =int(input())
values = list(map(int,input().split()))
a  = 0
b = number_of_cards-1
serja =0
dima = 0
card_count = 0
while(b-a!=-1):
    if(values[b]>values[a]):
        
        if(card_count%2==0):
            serja+=values[b]
        else:
            dima+=values[b]
        card_count+=1
        b-=1
    else:
        
        if(card_count%2==0):
            serja+=values[a]
        else:
            dima+=values[a]
        card_count+=1  
        a+=1  
print(serja,dima)