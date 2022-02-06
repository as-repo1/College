class StLine():
    def __init__(self,l=None):
        if l is  None:
            self.length=eval(input('enter the length:'))
        else:
            self.length=l
        print("A straight line has been created")
    def get_length(self):
        return self.length

class Square(StLine):
    def __init__(self,s=None):
        if s is None:
            super().__init__()
        else:
            super().__init__(s)
        print("A Square has been created")
    def get_side(self):
        return self.length
    def calc_area(self):
        return self.length**2
class Cube(Square):
    def __init__(self,h=None):
        if h is None:
            self.height=eval(input('enter the height of the cube:'))
        else:
            self.height=h
        print("A Cube has been created")
    def get_height(self):
         return self.height
    def calc_area(self):
        return 6*self.height**2

st=StLine()
print(st.get_length())
sq=Square()
print('Square has been created length:',sq.get_side())
print('area of square:',sq.calc_area())
cu=Cube()
print('Cube has been created with height:',cu.get_height())
print('area of cube:',cu.calc_area())
