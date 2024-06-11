class Solution():
    def __init__(self):
        self.Note = ''
        self.Words = ''
        self.Array_note = []
        self.Array_words = []

    def canConstruct(self, ransomNote, magazine):
        self.Note, self.Words = ransomNote, magazine
        self.Array_note, self.Array_words = list(self.Note), list(self.Words)
        for i in self.Array_words:
            for j in self.Array_note:
                if i == j:
                    self.Array_note.remove(j)
                    continue
        if len(self.Array_note) == 0:
            return True
        else:
            return False        
        return self.Array_note, self.Array_words

if __name__ == '__main__':
    res = Solution().canConstruct('aa', 'aab')
    print(res)