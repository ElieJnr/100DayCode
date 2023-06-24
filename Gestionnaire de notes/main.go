package main

import (
	"fmt"
	"time"

	"fyne.io/fyne/v2/app"
	"fyne.io/fyne/v2/container"
	"fyne.io/fyne/v2/widget"
)

type Note struct {
	DateDeCreation int
	Titre          string
	Contenu        string
}

func addNotes() {
	var n int
	fmt.Print("Combien de notes comptez-vous saisir ? ")
	fmt.Scanf("%d", &n)
	notes := make([]Note, n)

	for i := 0; i < n; i++ {
		fmt.Printf("Note %d\n", i+1)

		notes[i] = Note{}
		notes[i].DateDeCreation = int(time.Now().Unix())

		fmt.Print("Titre de la note : ")
		fmt.Scanf("%s", &notes[i].Titre)

		fmt.Print("Contenu de la note : ")
		fmt.Scanf("%s", &notes[i].Contenu)

		fmt.Println("Note ajoutée avec succès !")
	}

	// Faites ce que vous voulez avec les notes saisies, comme les enregistrer dans un fichier ou les afficher à l'utilisateur.
}

func main() {
	myApp := app.New()
	myWindow := myApp.NewWindow("Gestionnaire de notes")

	titleEntry := widget.NewEntry()
	contentEntry := widget.NewEntry()
	addButton := widget.NewButton("Ajouter", func() {
		note := Note{
			DateDeCreation: int(time.Now().Unix()),
			Titre:          titleEntry.Text,
			Contenu:        contentEntry.Text,
		}
		fmt.Println("Note ajoutée avec succès :", note)
	})

	form := &widget.Form{
		Items: []*widget.FormItem{
			{Text: "Titre", Widget: titleEntry},
			{Text: "Contenu", Widget: contentEntry},
		},
		OnSubmit: func() {
			addButton.OnTapped(addButton)
		},
	}

	myWindow.SetContent(container.NewVBox(
		widget.NewLabel("Bienvenue dans le gestionnaire de notes !"),
		form,
		addButton,
	))

	myWindow.ShowAndRun()
}
