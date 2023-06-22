package main

import (
	"encoding/json"
	"fmt"
)

type User struct {
	Nom   string `json: "Nom"`
	Age   int    `json: "Age"`
	Mail  string `json: "Mail"`
	Riche bool   `json: "Riche"`
}

func main() {
	jsonFromAPI := `
[
	{
		"Nom": "Elie",
		"Age": 22,
		"Mail": "elie@example.com",
		"Riche": false
	},
	{
		"Nom": "Kapil",
		"Age": 18,
		"Mail": "kapil@example.com",
		"Riche": false
	},
	{
		"Nom": "Elon",
		"Age": 56,
		"Mail": "elon@tesla.com",
		"Riche": true
	}
]`

	var users []User
	err := json.Unmarshal([]byte(jsonFromAPI), &users)
	if err != nil {
		fmt.Println("ERROR unmarshalling json: ", err)
	}

	fmt.Printf("Json: %v\n", users)
}
