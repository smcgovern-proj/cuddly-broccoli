#include <iostream>

int main() {
	std::cout << "please input two integers, separated by a space" << "\n";
	int x{};
	int y{};
	std::cin >> x >> y;
	int ans{x * y};
	std::cout << "answer is: " << ans << " \n";
	return 0;
}
