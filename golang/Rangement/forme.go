package main

type Forme interface {
	aire() float64
}

type Figure struct {
	longueur float64
	largeur  float64
}

func (c Figure) aire() float64 {
	return c.longueur * c.largeur
}
