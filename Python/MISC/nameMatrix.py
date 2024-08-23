names=[]
n=int(input())
for i in range(n):
    str=input()
    names+=[str]

max_len=0
for ele in names:
    if len(ele) > max_len:
        max_len = len(ele)
        res = ele
# print(len(res))


for i in range(len(res)):
    for j in range(n):
        try:
            print(names[j][i],end="")
        except:
            print(" ",end="")
    print()
    