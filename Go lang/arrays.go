package main

import (
	"github.com/nsf/termbox-go"
)

func main() {
	err := termbox.Init()
	if err != nil {
		panic(err)
	}
	defer termbox.Close()

	// Efface l'écran avec une couleur de fond personnalisée
	termbox.Clear(termbox.ColorDefault, termbox.ColorRed)

	// Dessine un rectangle avec des caractères personnalisés
	for x := 0; x < 10; x++ {
		for y := 0; y < 5; y++ {
			termbox.SetCell(x, y, '█', termbox.ColorBlue, termbox.ColorDefault)
		}
	}

	// Met à jour l'écran
	termbox.Flush()

	// Attend une touche pour quitter
	for {
		switch ev := termbox.PollEvent(); ev.Type {
		case termbox.EventKey:
			return
		}
	}
}
