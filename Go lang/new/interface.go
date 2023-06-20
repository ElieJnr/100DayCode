package main

type animal interface {
	Noise() string
	Numbersofleg() int
}

type cat struct {
	name string

	Breed string
}

type spider struct {
	name string

	Breed string

	venomous bool
}

func main() {
	chat := cat{
		name:  "Garfield",
		Breed: "sauvage",
	}

}

func PrintAnimalInfo(a animal) {
	fmt.Println("Le pruit de cet animal est : %v", a.Noise(), " Et il possede :", a.Numbersofleg(), " pattes")
}
