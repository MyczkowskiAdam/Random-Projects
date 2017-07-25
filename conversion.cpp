#include <iostream>
#include <conio.h>
#include <string>

int main() {
	std::cout << "Hello" << std::endl;

	int Num = 47;

	std::string NumAr = std::to_string(Num);

	const char *FrNmAr = const_cast<char*>(NumAr.c_str());

	std::cout << FrNmAr[0] << std::endl;

	int Total = (FrNmAr[0] - '0') + (FrNmAr[1] - '0');

	std::cout << Total << std::endl;

	while (true) {
		if (_kbhit()) {
			return 0;
		}
	}
}