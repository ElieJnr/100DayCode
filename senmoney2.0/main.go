package main

import "fmt"

func Trouve(tab []int, val int) int {
	indice := -1
	for i := 0; i < len(tab); i++ {
		if tab[i] == val {
			indice = i
			break
		}
	}
	return indice
}
func affichersoldes(indice int) int {
	tabsoldes := [5]int{10000, 150000, 12500, 45000, 32500}
	return tabsoldes[indice]
}

func Menu() int {
	var choix int
	fmt.Println("### Menu Sen Money ###")
	fmt.Println("Veuillez saisir le numero du service a utiliser")
	fmt.Println("1.Afficher votre solde")
	fmt.Println("2.Transfert d'argent")
	fmt.Println("3.Options")
	fmt.Print("Votre choix: ")
	fmt.Scanln(&choix)
	return choix

}
func TransfertArgent(indice int) {
	var numeroDestinataire int
	var montant int
	var motDePasse int
	tabnumeros := [5]int{779000000, 778000000, 774000000, 775000000, 771000000}
	tabsoldes := [5]int{10000, 150000, 12500, 45000, 32500}
	tabcode := [5]int{1111, 1111, 1111, 1111, 1111}
	indice2 := -1

	for indice2 == -1 {
		fmt.Print("Veuillezsaisir le numero du destinataire")
		fmt.Scanln(&numeroDestinataire)

		indice2 = Trouve(tabnumeros[:], numeroDestinataire)

		if indice2 == -1 {
			fmt.Println("Numéro non trouvé. Veuillez réessayer.")
		}
	}
	fmt.Print("Veuillez saisir le montant a transferer ")
	fmt.Scanln(&montant)
	if montant > tabsoldes[indice] {
		fmt.Println("Soldes Insuffisants")
	} else if montant <= tabsoldes[indice] {
		fmt.Print("Veuillez entrer votre mot de passe")
		fmt.Scanln(&motDePasse)
		if motDePasse != tabcode[indice] {
			fmt.Println("Mot de passe incorrect")
		} else if motDePasse == tabcode[indice] {
			fmt.Println("Transfert Reussi!")
			tabsoldes[indice2] += montant
			tabsoldes[indice] -= montant
		}
	}

}
func returnMenu() {
	tabnumeros := [5]int{779000000, 778000000, 774000000, 775000000, 771000000}
	var numero int
	var choix string
	indice := -1

	for indice == -1 {
		fmt.Print("Entrer votre numéro de téléphone : ")
		fmt.Scanln(&numero)

		indice = Trouve(tabnumeros[:], numero)

		if indice == -1 {
			fmt.Println("Numéro non trouvé. Veuillez réessayer.")
		}
	}
	ChoixMenu := Menu()
	if ChoixMenu == 1 {
		fmt.Println("Votre solde actuel est: ", affichersoldes(indice))
	} else if ChoixMenu == 2 {
		TransfertArgent(indice)
	}

	fmt.Print("Voulez vous retournez au menu principale: ")
	fmt.Scanln(&choix)

	if choix == "y" {
		returnMenu()
	} else {
		fmt.Println("Au-Revoir")
	}
	fmt.Println("-----------------------------")
}
func main() {
	tabnumeros := [5]int{779000000, 778000000, 774000000, 775000000, 771000000}
	var numero int
	var choix string
	indice := -1

	for indice == -1 {
		fmt.Print("Entrer votre numéro de téléphone : ")
		fmt.Scanln(&numero)

		indice = Trouve(tabnumeros[:], numero)

		if indice == -1 {
			fmt.Println("Numéro non trouvé. Veuillez réessayer.")
		}
	}
	ChoixMenu := Menu()
	if ChoixMenu == 1 {
		fmt.Println("Votre solde actuel est: ", affichersoldes(indice))
	} else if ChoixMenu == 2 {
		TransfertArgent(indice)
	}

	fmt.Print("Voulez vous retournez au menu principale: ")
	fmt.Scanln(&choix)

	if choix == "y" {
		returnMenu()
	} else {
		fmt.Println("Au-Revoir")
	}
	fmt.Println("---------------------------------")
}
