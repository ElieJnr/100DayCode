package main

type Animal interface {
	Parler() string
}

type espece struct {
	Type string
	Race string
	Cri  string
}

func (c espece) Parler() string {
	return c.Cri
}
