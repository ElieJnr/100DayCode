package main

import (
	"errors"
	"fmt"
)

func Divide(a float64, b float64) (float64, error) {
	if b == 0 {
		return 0, errors.New("Division by zero error")
	}
	return a / b, nil
}

func main() {
	fmt.Println(Divide(5, 0))
}
