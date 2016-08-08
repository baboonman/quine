package main

import "fmt"

func main() {
	var s string = "package main%cimport %cfmt%c%c%cfunc main() {%c%cvar s string = %c%s%c%c%cfmt.Printf(s, 10, 34, 34, 10, 10, 10, 9, 34, s, 34, 10, 9, 10, 10)%c}%c"
	fmt.Printf(s, 10, 34, 34, 10, 10, 10, 9, 34, s, 34, 10, 9, 10, 10)
}
