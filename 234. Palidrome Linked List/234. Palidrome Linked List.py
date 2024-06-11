class Solution():
    def __init__(self):
        self.List = []
        self.Translated_list = []
        self.Len = 0

    def isPalindrome(self, List):
        self.List = List
        self.Translate()
        if self.List == self.List[::-1]:
            return True
        else:
            return False

    def Translate(self):
        self.Len = 0
        while True:
            try:
                self.Translated_list.append(self.List[self.Len])
                print(f'{self.Translated_list} TL || SL {self.List[self.Len]}')
                self.Len += 1
            except:
                break
        self.List = self.Translated_list[:]
        self.Translated_list = []
        return

if __name__ == '__main__':
        ret = Solution().isPalindrome([1, 2, 3, 4, 3, 2, 1])
        print(ret)