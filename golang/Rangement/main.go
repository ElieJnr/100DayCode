package main

import (
	"fmt"
	"golang/monmodule"
)

func main() {
	infoChannel := make(chan monmodule.YourInfo)

	go func() {
		myinfo := monmodule.YourInfo{
			Name:    "ELIE",
			Age:     22,
			Adresse: "B424",
			Numeros: map[string]int{"ORANGE": 7775081113},
		}
		infoChannel <- myinfo
	}()

	receivedInfo := <-infoChannel
	fmt.Println(receivedInfo.Name)
}
