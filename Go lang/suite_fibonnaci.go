package main

import "fmt"

func suitefibonacci(n int) {
	u_k := 0
	u_0 := 0
	u_1 := 1
	fmt.Println("u_0=", u_0)
	fmt.Println("u_1=", u_1)
	for i := 2; i <= n; i++ {
		u_k = u_0 + u_1
		u_0 = u_1
		u_1 = u_k
		fmt.Println("u_", i, "=", u_k)
	}
}
func main() {
	var n int
	fmt.Print("Entrer une valeur pour n : ")
	fmt.Scan(&n)
	suitefibonacci(n)
}
