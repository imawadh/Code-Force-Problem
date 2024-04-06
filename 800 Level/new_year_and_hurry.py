# Solved 
problem,time = map(int,input().split())
time = 240-time
sum = 0
increase  = 5
count = 0
while(time-sum>=increase):
    sum+=increase
    increase+=5
    count+=1
if(count>problem):
    print(problem)
else:
    print(count)
