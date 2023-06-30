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

func main() {
	tabnumeros := [5]int{779000000, 778000000, 774000000, 775000000, 771000000}

	var numero int
	indice := -1

	for indice == -1 {
		fmt.Print("Entrer votre numéro de téléphone : ")
		fmt.Scanln(&numero)

		indice = Trouve(tabnumeros[:], numero)

		if indice == -1 {
			fmt.Println("Numéro non trouvé. Veuillez réessayer.")
		}
	}

	fmt.Println("Numéro trouvé à l'indice :", indice)
}
