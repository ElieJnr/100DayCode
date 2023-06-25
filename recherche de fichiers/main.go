package main

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"net/http"
)

type ExchangeRates struct {
	Base  string             `json:"base"`
	Rates map[string]float64 `json:"rates"`
}

func convertCurrency(amount float64, fromCurrency string, toCurrency string) (float64, error) {
	url := fmt.Sprintf("https://api.exchangeratesapi.io/latest?base=%s&symbols=%s", fromCurrency, toCurrency)

	response, err := http.Get(url)
	if err != nil {
		return 0, err
	}

	defer response.Body.Close()

	data, err := ioutil.ReadAll(response.Body)
	if err != nil {
		return 0, err
	}

	var exchangeRates ExchangeRates
	err = json.Unmarshal(data, &exchangeRates)
	if err != nil {
		return 0, err
	}

	rate, exists := exchangeRates.Rates[toCurrency]
	if !exists {
		return 0, fmt.Errorf("Currency conversion rate not found")
	}

	convertedAmount := amount * rate
	return convertedAmount, nil
}
func main() {
	amount := 100.0
	fromCurrency := "USD"
	toCurrency := "EUR"

	convertedAmount, err := convertCurrency(amount, fromCurrency, toCurrency)
	if err != nil {
		fmt.Println("Conversion error:", err)
		return
	}

	fmt.Printf("%.2f %s = %.2f %s\n", amount, fromCurrency, convertedAmount, toCurrency)
}
