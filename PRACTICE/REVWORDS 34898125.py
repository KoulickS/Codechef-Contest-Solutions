# cook your code here

num = int(input())
for i in range(num):
    s = input()
    w=s.split(' ')  
    reverse_sentence = ' '.join(reversed(w))
    print(reverse_sentence)