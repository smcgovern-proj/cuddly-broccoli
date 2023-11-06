#include <deque>
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <stack>

void log_stack(std::stack<std::string>& s) {
	while (!s.empty()) {
		std::cout << s.top() + "\n";
		s.pop();
	}
}

void ex_1() {
	std::ifstream inf{ "./sample_data_1.1.1.txt" };
	
	if (!inf) {
		std::cerr << "Could not open file";
	}

	std::stack<std::string> s{};

	while (inf) {
		std::string line{};
		std::getline(inf, line);
		s.push(line);
	}
	
	log_stack(s);
}

void ex_2() {
	std::ifstream inf{ "./sample_data_1.1.2.txt" };
	
	if (!inf) {
		std::cerr << "Could not open file";
	}

	std::stack<std::string> s{};
	
	int count{ 0 };
	while (inf) {

		if (count <= 49) {
			std::string line{};
			std::getline(inf, line);
			if (line.length() > 0) {
				s.push(line);
			}
			count++;
			continue;
		} 

		log_stack(s);		
		count = 0;

	}

	log_stack(s);
}

void ex_3() {

	std::ifstream inf{ "./sample_data_1.1.3.txt" };
	std::deque<std::string> dq{};

	while (inf) {
		std::string line{};
		std::getline(inf, line);
		dq.push_back(line);

		if (line == "") {
			std::cout << "42 lines ago: " << dq.front() << "\n";
		}

		if (dq.size() >= 42) {
			dq.pop_front();
		}
	}

}


int main() {
	// ex_1();
	// ex_2();
	ex_3();
	return 0;
}

