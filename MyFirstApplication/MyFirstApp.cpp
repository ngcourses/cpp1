#include <iostream>

using namespace std;

int main() {
	int my_var = 10;

	while (my_var >= 0) {
		if (my_var == 5) {
			my_var--;
			continue;
		}

		if (my_var == 3) {
			break;
		}

		std::cout << my_var << std::endl;
		my_var--;
	}

}