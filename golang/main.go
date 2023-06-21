package main

import "fmt"

type surface interface {
	Surface() int
}

type figure struct {
	longueur int
	largeur  int
}

func main() {
	carre := figure{
		longueur: 10,
		largeur:  10,
	}
	fmt.Println(carre.Surface())
	rectangle := figure{
		longueur: 20,
		largeur:  13,
	}
	fmt.Println(rectangle.Surface())
}

func (c figure) Surface() int {
	surface := c.longueur * c.largeur
	return surface
}
