#include "io.h"
#include <iostream>

 int main() {
	std::cout << "please input two numbers, separated by a space. \n";
	int x{ readNumber() };
	int y{ readNumber() };
	int sum { x + y };
	writeNumber(sum);
	return 0;
 }
