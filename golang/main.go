package main

import (
	"errors"
	"fmt"
)

type Richesse interface {
	riche() (bool, error)
}

type Person struct {
	age  int
	rich bool
}

func (c Person) riche() (bool, error) {
	if c.rich != true && c.rich != false {
		return false, errors.New("Un booléen est requis")
	} else if c.rich {
		return true, nil
	} else {
		return false, nil
	}
}

func main() {
	Myinfos := Person{
		age:  22,
		rich: false,
	}
	isriche, err := Myinfos.riche()
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println("Isriche:", isriche)
	}
}
