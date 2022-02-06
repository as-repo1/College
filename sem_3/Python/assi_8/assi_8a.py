str=input('enter a string:')
l1=[]
l2=[]
l3=str.split()
for n in l3:
    if n.isalpha():
        l1.append(n)
        l2.append(l3.count(n))

t1=tuple(zip(l1,l2))
s1=set(t1)
d1=dict(s1)
print(d1)
