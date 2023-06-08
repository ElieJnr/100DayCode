#cours github
print("aujourd hui on teste github")
def addition_listes(liste1, liste2):
    resultat = []
    for element1, element2 in zip(liste1, liste2):
        somme = element1 + element2
        resultat.append(somme)
    return resultat
liste1 = [1, 2, 3]
liste2 = [4, 5, 6]
resultat = addition_listes(liste1, liste2)
print(resultat)
print("Le test il ne marche toujours pas")