def inverser_groupe_deux_par_deux(chaine):
    # Vérifier que la longueur de la chaîne est paire
    while len(chaine) % 2 != 0:
        return "La chaîne doit avoir une longueur paire."

    # Convertir la chaîne en liste de caractères
    liste_caracteres = list(chaine)

    # Inverser les caractères deux par deux
    for i in range(0, len(liste_caracteres), 2):
        liste_caracteres[i], liste_caracteres[i+1] = liste_caracteres[i+1], liste_caracteres[i]

    # Rejoindre les caractères inversés pour former la nouvelle chaîne
    nouvelle_chaine = ''.join(liste_caracteres)

    return nouvelle_chaine

# Exemple d'utilisation
chaine_originale = "Bonjour"
chaine_inverse = inverser_groupe_deux_par_deux(chaine_originale)
print(chaine_inverse)
