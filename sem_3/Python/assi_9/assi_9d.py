class SqrArea():
    def calc_area(self,l):
        return l*l
    def __del__(self):
        print('Square has been destructed')
class SqrPeri():
    def calc_peri(self,l):
        return 4*l
    def __del__(self):
        print('Squareperi has been destructed')
class Sqr(SqrArea,SqrPeri):
    def __init__(self,s=None):
        if s is None:
            self.length=eval(input('enter the length of the Square:'))
        else:
            self.length=s
    def show(self):
        print('area of the square:',super().calc_area(self.length))
        print('peripheral of the Square:',super().calc_peri(self.length))

sq=Sqr()
print(sq.show())
