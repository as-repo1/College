a,b=0,1
n = open("text3.txt",'w')
m = int(input("Enter the number :"))
for i in range(m):
    n.write(str(a) + ' ')
    a,b=b,a+b
n.close()
