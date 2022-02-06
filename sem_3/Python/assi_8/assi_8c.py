class MyException(Exception):
    pass
def rotatelist(l,n,d):
    l1=[]
    try:
        if n >= len(l):
            raise MyException
        if d== "Left":
            l1=l[n:len(l)]+l[0:n]
            print('after rotation:',l1)
        if d== "Right":
            n=len(l)-n
            l1=l[n:len(l)]+l[0:n]
            print('after rotation:',l1)
    except MyException:
        print('The number of rotation is greater than the number of elememt')
        l1=l.copy()
    finally:
        return l1
lst=[]
l=int(input('enter elements no:'))
for i in range(l):
    l1=int(input('Enter element no {}:'.format(i+1)))
    lst.append(l1)
print(lst)
n=int(input('no of rotations:'))
d=input('Left/Right:')
rotatelist(lst,n,d)
