class Powerset():

    def _init_(self,s):
            if type(s) == set:
                self.set1 = s
            else:
                print('Argument is not a set')

    def _add_(self,other):
        print('The 1st set is: ', self.set1)
        print('The 2nd set is: ', other.set1)
        print('The reuslt of union is: ',self.set1.union(other.set1))

    def _mul_(self,other):
        print('The 1st set is: ',self.set1)
        print('The 2nd set is: ', other.set1)
        print('The reuslt of intersection is: ',self.set1.intersection(other.set1))
    def _sub_(self,other):
        print('The 1st set is: ',self.set1)
        print('The 2nd set is: ', other.set1)
        print('The reuslt of difference is: ',self.set1.difference(other.set1))
        print('The reuslt of difference is: ',other.set1.difference(self.set1))
