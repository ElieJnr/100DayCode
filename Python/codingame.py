n=int(input("Nombres de chiffres que vous voulez dans la liste: "))
liste=[]
sum=0
moyenne=0
for i in range(n):
    elements=int(input())
    liste.append(elements)
    sum+=elements
    moyenne=sum/n
    if elements > moyenne:
        print("Elements_Superieur:", elements)
    else:
        continue
    if elements % 2==0:
        print("Elements pair:", elements)
    else:
        continue
print("Somme=", sum)
print("Moyenne= ", moyenne)