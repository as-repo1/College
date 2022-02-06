 class Circle():
    def __init__(self,r=None):
        if r is  None:
            self.radius=eval(input('enter the radius:'))
        else:
            self.radius=r
        print("A circle has been created")
        
    def get_radius(self):
        return self.radius
    
    def calc_area(self):
        return 3.14*self.radius**2
    
    def __del__(self):
        print("Object has been destructed")
class Cylinder(Circle):
    def __init__(self,h=None,r=None):
        if h is None:
            self.height=eval(input('enter the height of the cylinder:'))
        else:
            self.height=h
        if r is None:
            super().__init__()
        else:
            super().__init__(r)
        print("A cylinder has been created")
    def calc_area(self):
        return 2*3.14*self.radius*(self.radius+self.height)

