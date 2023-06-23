package divide

import (
	"testing"
)

func TestDivide(t *testing.T) {
	// Cas de test 1 : division de 10 par 2
	result := Divide(10, 2)
	expected := 5.0

	if result != expected {
		t.Errorf("Résultat incorrect. Résultat: %f, Attendu: %f", result, expected)
	}

	// Cas de test 2 : division de 8 par 4
	result = Divide(8, 4)
	expected = 2.0

	if result != expected {
		t.Errorf("Résultat incorrect. Résultat: %f, Attendu: %f", result, expected)
	}

	// Ajoutez d'autres cas de test si nécessaire

	result = Divide(6, 3)
	expected = 5.0

	if result != expected {
		t.Errorf("Résultat incorrect. Résultat: %f, Attendu: %f", result, expected)
	}
}
