#include "io.h"
#include <iostream>

int readNumber() {
	int x {};
	std::cin >> x;
	return x;
}

void writeNumber(int x) {
	std::cout << "sum: " << x << "\n";
}
