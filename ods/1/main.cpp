#include <iostream>
#include <fstream>
#include <string>
#include <stack>

void ex_1() {
	std::ifstream inf{ "./sample_data.txt" };
	
	if (!inf) {
		std::cerr << "Could not open file";
	}

	std::stack<std::string> s{};

	while (inf) {
		std::string line{};
		std::getline(inf, line);
		s.push(line);
	}

	while (!s.empty()) {
		std::cout << s.top() + "\n";
		s.pop();
	}
}

int main() {
	ex_1();
	return 0;
}

