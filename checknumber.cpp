#include <iostream>
#include <string>
#include <conio.h>

int inputNumber, dig[4], checkNumber, keyInput;
#define KEY_Y 121 // ASCII value for 'y' key
#define KEY_N 110 // ASCII value for 'n' key

int main() {
	while (1) {
		std::cout << "Enter 5 digit item number here > " << std::flush;
		std::cin >> inputNumber;
		std::cout << std::endl;
		while ((std::to_string(inputNumber)).length() != 5 || std::cin.fail()) {
			std::cout << "Entered number is not 5 digit long, please enter the item number again > " << std::flush;
			std::cin.clear();
			std::cin.ignore();
			std::cin >> inputNumber;
			std::cout << std::endl;
		}

		dig[0] = ((inputNumber / 10000) % 10) * 5;
		dig[1] = ((inputNumber / 1000) % 10) * 6;
		dig[2] = ((inputNumber / 100) % 10) * 7;
		dig[3] = ((inputNumber / 10) % 10) * 8;
		dig[4] = (inputNumber % 10) * 9;

		checkNumber = dig[0] + dig[1] + dig[2] + dig[3] + dig[4];

		if (checkNumber > 99) {
			dig[5] = (checkNumber / 10) % 10;
			dig[6] = checkNumber % 10;
			std::cout << inputNumber << " " << dig[5] << dig[6] << std::endl;
		}
		else {
			std::cout << inputNumber << " " << checkNumber << std::endl;
		}

		std::cout << "Enter another number? Y/N" << std::endl;
		keyInput = _getch();
		while (keyInput != KEY_Y && keyInput != KEY_N) {
			std::cout << "Wrong key pressed, enter another number? Y/N" << std::endl;
			keyInput = _getch();
		}
		if (keyInput == KEY_N) {
			return 0;
		}
	}
}