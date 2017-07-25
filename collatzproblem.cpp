#include <iostream>
#include <conio.h>

int n, count;

int main() {

	std::cout << "Enter an integer > " << std::flush;
	std::cin >> n;
	std::cout << std::endl;

	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
			std::cout << n << " (E) " << std::endl;
		}
		else {
			n = (3 * n) + 1;
			std::cout << n << " (O) " << std::endl;
		}
		count += 1;
	}

	std::cout << std::endl;
	std::cout << "Chain of values: " << count+1 << std::endl;
	std::cout << "Press any key to exit . . ." << std::endl;
	while (true) {
		if (_kbhit()) {
			return EXIT_SUCCESS;
		}
	}
}