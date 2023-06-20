package main

import "fmt"

func main() {
	MyContact := NewContact("Elie", 22, map[string]string{"Orange": "77-750-81-13", "FREE": "76-496-07-50"})
	MyNewContact := NewContact("Jean", 22, map[string]string{"Orange": "77-750-81-14", "FREE": "76-496-07-51"})
	fmt.Println(MyContact.displaycontact())
	fmt.Println(MyNewContact.displaycontact())
}
