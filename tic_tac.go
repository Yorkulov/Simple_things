package main

import (
	"fmt"
	"os"
	"os/exec"
)

func main() {
	// Tic Tac
	var start bool = true
	fmt.Println("-------------------------------------------------")
	fmt.Println("                Welcome to Tic Tac               ")
	fmt.Println("                   Player X: O                   ")
	fmt.Println("_________________________________________________")
	for start {
		flag_two := false
		arr := []int{0, 0, 0, 0, 0, 0, 0, 0, 0}
		for i := 1; i <= 9; i++ {
			if i%2 == 1 {
				user_one_input(arr)
			} else {
				user_two_input(arr)
			}
			clear_display()
			flag, user := check_winner(arr)
			if flag {
				clear_display()
				fmt.Println("-------------------------------------------------")
				fmt.Println(string(user), "foydalanuvchisi g'alaba qozondi!")
				fmt.Println("_________________________________________________")
				display(arr)
				start = start_game()
				flag_two = true
				break
			}
		}
		clear_display()
		if flag_two == true {
			continue
		}
		display(arr)
		fmt.Println("-------------------------------------------------")
		fmt.Println("Hech kim g'alaba qozonmadi!")
		fmt.Println("_________________________________________________")
		start = start_game()
	}

}

func start_game() bool {
	var letter string
	fmt.Print("O'yinni davom ettirasizmi [y/n]: ")
	fmt.Scan(&letter)
	if letter == "n" || letter == "N" {
		return false
	}
	return true
}

func check_winner(arr []int) (bool, byte) {
	algorithm := [8][3]int{{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}}
	for i := 0; i < 8; i++ {
		count_x := 0
		count_o := 0
		for _, value := range algorithm[i] {
			if arr[value] == 1 {
				count_x++
			} else if arr[value] == 2 {
				count_o++
			}

		}
		if count_x == 3 {
			return true, 'x'
		} else if count_o == 3 {
			return true, 'o'
		}
	}

	return false, ' '
}

func user_one_input(arr []int) {
	// x
	display(arr)
	fmt.Println("______________________")
	fmt.Println("sizning belgingiz --> x")
	fmt.Println("Belgini chizish uchun raqamni kiriting: ")
	var number int
	fmt.Print("--> ")
	fmt.Scan(&number)
	for number > 9 || number < 1 || !check_input(arr, number-1) {
		fmt.Println("Belgilangan sohani tanladingiz qaytadan urinib ko'ring: ")
		fmt.Scan(&number)
	}
	arr[number-1] = 1
}

func user_two_input(arr []int) {
	// o
	display(arr)
	fmt.Println("______________________")
	fmt.Println("sizning belgingiz --> o")
	fmt.Println("Belgini chizish uchun raqamni kiriting: ")
	var number int
	fmt.Print("--> ")
	fmt.Scan(&number)
	for number > 9 || number < 1 || !check_input(arr, number-1) {
		fmt.Println("Belgilangan sohani tanladingiz qaytadan urinib ko'ring: ")
		fmt.Scan(&number)
	}
	arr[number-1] = 2
}

func check_input(arr []int, index int) bool {
	if arr[index] == 0 {
		return true
	}
	return false
}

func clear_display() {
	cmd := exec.Command("cmd", "/c", "cls")
	cmd.Stdout = os.Stdout
	cmd.Run()
}

func display(result_list []int) {
	count := 0
	for index, value := range result_list {
		count++
		if value == 1 {
			fmt.Print(" x ")
		} else if value == 2 {
			fmt.Print(" o ")
		} else {
			fmt.Print(" ", index+1, " ")
		}
		if count%3 == 0 {
			fmt.Println()
		}
	}
}
