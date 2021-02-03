class sort:
    def __init__(self,string):
        self.string = string
    def get_C(self):
         C_len = self.string.count("C")
         data.append(C_len)
    def get_H(self):
        H_len =  self.string.count("H")
        data.append(H_len)
    def get_E(self):
        E_len = self.string.count("E")
        data.append(E_len)
    def get_F(self):
        F_len = self.string.count("F")
        data.append(F_len)
    def solve():
        return min(data)

data = []

x = input()
f = sort(x)
f.get_C()
f.get_H()
f.get_E()
f.get_F()
print(sort.solve())