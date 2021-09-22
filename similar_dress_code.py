n= int(input())
for j in range(0,n):
    s=input()
    a=s.count('0')
    b=s.count('1')
    if(a>b):
        print(b)
    else:
        print(a)
