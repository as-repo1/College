count = 0
f = open("text2.txt",'w')
n = int(input("Enter number: "))
i=2
while(count<n):
    for j in range(2,i):
        if(i%j == 0):
            break
    else:
        count +=1
        print(i,end=" ")
        f.write(str(i) + ' ' )
    i+=1
f.close()
