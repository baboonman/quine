package main

/* comment */
import (
	"fmt"
	"os"
)

func main() {
	f, _ := os.Create("Grace_kid.go")
	defer f.Close()
	fmt.Fprintf(f, "%s%c%s%c\n", s, 0x60, s, 0x60)
}

var s = `package main

/* comment */
import (
	"fmt"
	"os"
)

func main() {
	f, _ := os.Create("Grace_kid.go")
	defer f.Close()
	fmt.Fprintf(f, "%s%c%s%c\n", s, 0x60, s, 0x60)
}

var s = `
