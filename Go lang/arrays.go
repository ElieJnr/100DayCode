package main

import (
	"fmt"
)

func main() {
	var jours = [7]string{"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"}

	for i := 0; i < len(jours); i++ {
		fmt.Println(jours[i])
	}
}
