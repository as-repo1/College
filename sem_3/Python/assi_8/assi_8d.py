def towers(n,source,destination,auxiliary):
    if n>0:
        towers(n-1,source,auxiliary,destination)
        print('move disk {} from peg {} to peg {}'.format(n,source,destination))
        towers(n-1,auxiliary,destination,source)
n=int(input('enter disk no:'))
if n==0:
    print('not possible!!!')
else:
    towers(n,'A','C','B')
