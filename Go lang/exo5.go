package main

import "fmt"

func main() {
	var n int
	fmt.Print("Entrer un entier : ")
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		// Afficher les espaces avant chaque ligne d'étoiles
		for j := 0; j < n-i-1; j++ {
			fmt.Print(" ")
		}

		// Afficher les étoiles de la ligne actuelle
		for k := 0; k < 2*i+1; k++ {
			fmt.Print("*")
		}

		// Aller à la ligne suivante
		fmt.Println()
	}
}
