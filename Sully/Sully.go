package main

import (
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"regexp"
	"strconv"
)

func main() {
	var i int = 5
	if filepath.Base(os.Args[0]) != "Sully" {
		i -= 1
	}
	si := strconv.Itoa(i)
	f, _ := os.Create(fmt.Sprintf("Sully_%d.go", i))
	var re = regexp.MustCompile("\\sSUB")
	s2 := re.ReplaceAllLiteralString(s, " "+si)
	fmt.Fprintf(f, "%s%c%s%c\n", s2, 0x60, s, 0x60)
	f.Close()
	cmd_build := exec.Command("go", "build", "Sully_"+si+".go")
	cmd_exec := exec.Command("./Sully_" + si)
	cmd_build.Run()
	if i > 0 {
		cmd_exec.Run()
	}
}

var s = `package main

import (
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"regexp"
	"strconv"
)

func main() {
	var i int = SUB
	if filepath.Base(os.Args[0]) != "Sully" {
		i -= 1
	}
	si := strconv.Itoa(i)
	f, _ := os.Create(fmt.Sprintf("Sully_%d.go", i))
	var re = regexp.MustCompile("\\sSUB")
	s2 := re.ReplaceAllLiteralString(s, " "+si)
	fmt.Fprintf(f, "%s%c%s%c\n", s2, 0x60, s, 0x60)
	f.Close()
	cmd_build := exec.Command("go", "build", "Sully_"+si+".go")
	cmd_exec := exec.Command("./Sully_" + si)
	cmd_build.Run()
	if i > 0 {
		cmd_exec.Run()
	}
}

var s = `
