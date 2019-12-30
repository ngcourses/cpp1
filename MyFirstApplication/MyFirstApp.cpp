#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
	vector<string> my_array = {"Hello", "World"};
	
	// instantiate a counter
	// test counter against condition
	// increase counter

	for (int i = 0; i < my_array.size(); i++) {
		cout << "At: " << my_array[i] << endl;
	}

	cout << my_array[my_array.size() - 1] << endl;

	return 0;
}