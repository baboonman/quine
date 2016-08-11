package main

import (
	"fmt"
	"os"
)

func main() {
	var i int = 5
	f, _ := os.Create(fmt.Sprintf("Sully_%d.go", i))
	defer f.Close()
	fmt.Fprintf(f, "%s%c%s%c\n", s, 0x60, s, 0x60)
}

var s = `package main

import (
	"fmt"
	"os"
)

func main() {
	var i int = 5
	f, _ := os.Create(fmt.Sprintf("Sully_%d.go", i))
	defer f.Close()
	fmt.Fprintf(f, "%s%c%s%c\n", s, 0x60, s, 0x60)
}

var s = `
