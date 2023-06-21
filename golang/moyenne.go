package main

import "fmt"

type Etudiant struct {
	Nom   string
	Notes map[string]int
}

func eleve() int {
	info := Etudiant{
		Nom:   "ELIE",
		Notes: map[string]int{"MATH": 18, "SCIENCES PHYSIQUES": 14, "FRANCAIS": 15},
	}
	sum := 0
	for _, value := range info.Notes {
		sum += value
	}
	moyenne := sum / len(info.Notes)
	fmt.Println("Monsieur ", info.Nom, " a une moyenne de :")
	return moyenne
}
