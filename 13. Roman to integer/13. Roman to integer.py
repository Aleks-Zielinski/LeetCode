TRANSLATOR = {
    'I': 1,
    'V': 5, 
    'X': 10, 
    'L': 50, 
    'C': 100, 
    'D': 500, 
    'M': 1000}

class Solution():
    def __init__(self):
        self.Translator = TRANSLATOR
        self.Roman_Letters = ['I', 'V', 'X', 'L', 'C', 'D', 'M']
        self.Arab = 0
        self.Arab_array = []
        self.Roman = 0
        self.RomanArray = []

    def romanToInt(self, Roman):
        self.Roman, self.Arab_array = Roman, []
        self.RomanArray = list(self.Roman.upper())
        for i in self.RomanArray:
            if i not in self.Roman_Letters:
                self.RomanArray.remove(i)
        self.Arab = 0
        for i in self.RomanArray:
            self.Arab_array.append(self.Translator[i])
        while True:
            try:
                if len(self.Arab_array) > 1:
                    if self.Arab_array[0] < self.Arab_array[1]: # 10, 100, 200
                        self.Arab = self.Arab + (self.Arab_array[1] - self.Arab_array[0])
                        self.Arab_array.pop(0)
                        self.Arab_array.pop(0)
                    else:
                        self.Arab = self.Arab + self.Arab_array[0]
                        self.Arab_array.pop(0)
                else:
                    self.Arab = self.Arab + self.Arab_array[0]
                    self.Arab_array.pop(0)
            except:
                break
        return self.Arab

if __name__ == '__main__':
    while True:
        # try:
            x = input('Enter roman number => ')
            if x == 'break':
                break
            ret = Solution().romanToInt(x)
            print(ret)
        # except:
        #     pass