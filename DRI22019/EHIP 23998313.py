string=input()
x=len(set(char for char in string.lower() if char.islower()))
print(x)