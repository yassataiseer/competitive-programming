package main

import (
  "bufio"
  "fmt"
  "os"
  "strings"
  "strconv"
)
func main(){
	reader := bufio.NewReader(os.Stdin)
	text, _ := reader.ReadString('\n')
	x := strings.Split(text," ")
	fmt.Println(len(x))
	var error_case int
	error_case,_ = strconv.Atoi(x[len(x)-1])
	fmt.Println(error_case)
}