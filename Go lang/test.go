package main

import "fmt"

func main() {
	var n int
	fmt.Print("Entrer une entier: ")
	fmt.Scan(&n)
	fmt.Println("La table de multiplication de tout les entiers allant de", n, "a 10 est:")
	if n > 10 {
		fmt.Println("ERROR entier trop grand")
	} else {
		for i := n; i <= 10; i++ {
			fmt.Println("Table de multiplication pour: ", i)
			for j := 0; j <= 10; j++ {
				fmt.Println(i, "x", j, "=", i*j)
			}
		}
	}
}
