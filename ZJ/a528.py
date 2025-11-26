while True :
    try:
        n = int(input())
        num = []
        for i in range(n):
            num.append(int(input()))
        num.sort()
        for i in num: 
            print(i)    
    except:
        break
