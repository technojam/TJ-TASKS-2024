def compress(chars):
   #write your code here

if __name__ == "__main__":
    chars = ['a', 'a', 'b', 'b', 'c', 'c', 'c']
    newSize = compress(chars)
    print("New length:", newSize)
    print(chars[:newSize])
