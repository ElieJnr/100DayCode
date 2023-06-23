package main

import (
	"fmt"
	"image"
	_ "image/jpeg"
	_ "image/png"
	"log"
	"os"
)

const (
	widthScale  = 0.52 // Échelle horizontale
	heightScale = 0.17 // Échelle verticale
)

func main() {
	if len(os.Args) < 2 {
		fmt.Println("Veuillez fournir le chemin vers l'image en tant qu'argument.")
		return
	}

	imagePath := os.Args[1]

	file, err := os.Open(imagePath)
	if err != nil {
		log.Fatal(err)
	}
	defer file.Close()

	img, _, err := image.Decode(file)
	if err != nil {
		log.Fatal(err)
	}

	bounds := img.Bounds()
	width := bounds.Max.X
	height := bounds.Max.Y

	resizedWidth := int(float64(width) * widthScale)
	resizedHeight := int(float64(height) * heightScale)

	img = resizeImage(img, resizedWidth, resizedHeight)

	for y := 0; y < resizedHeight; y++ {
		for x := 0; x < resizedWidth; x++ {
			r, g, b, _ := img.At(x, y).RGBA()
			avg := (r + g + b) / 3
			normalized := float64(avg) / 65535.0 // Normalisation de la valeur de pixel

			// Choix du caractère ASCII en fonction de la valeur normalisée du pixel
			character := chooseCharacter(normalized)

			// Impression du caractère dans le terminal
			fmt.Print(string(character))
		}
		fmt.Println()
	}
}

// Choix du caractère ASCII en fonction de la valeur normalisée du pixel
func chooseCharacter(value float64) rune {
	asciiChars := []rune("@%#*+=-:. ") // Caractères ASCII du plus foncé au plus clair
	numChars := len(asciiChars)
	index := int(value * float64(numChars))
	if index >= numChars {
		index = numChars - 1
	}
	return asciiChars[index]
}

// Redimensionne l'image à la largeur et hauteur spécifiées
func resizeImage(img image.Image, width, height int) image.Image {
	resizedImg := image.NewRGBA(image.Rect(0, 0, width, height))
	originalBounds := img.Bounds()

	// Calcul du ratio de redimensionnement
	xRatio := float64(originalBounds.Max.X) / float64(width)
	yRatio := float64(originalBounds.Max.Y) / float64(height)

	for y := 0; y < height; y++ {
		for x := 0; x < width; x++ {
			// Calcul des coordonnées correspondantes dans l'image originale
			originalX := int(float64(x) * xRatio)
			originalY := int(float64(y) * yRatio)

			// Récupération de la couleur du pixel correspondant dans l'image originale
			color := img.At(originalX, originalY)
			resizedImg.Set(x, y, color)
		}
	}

	return resizedImg
}
