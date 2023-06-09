liste = input("Saisissez une liste de nombres séparés par des virgules : ")
liste = liste.split(",")
print("Liste des nombres :", liste)

somme = 0
for nombre in liste:
    somme += int(nombre)
print("Somme des nombres :", somme)

moyenne = somme / len(liste)
print("Moyenne des nombres :", moyenne)

nombre_sup_moyenne = 0
for nombre in liste:
    if int(nombre) > moyenne:
        nombre_sup_moyenne += 1
print("Nombre de nombres supérieurs à la moyenne :", nombre_sup_moyenne)

nombre_pairs = 0
i = 0
while i < len(liste):
    if int(liste[i]) % 2 == 0:
        nombre_pairs += 1
    i += 1
print("Nombre de nombres pairs :", nombre_pairs)
