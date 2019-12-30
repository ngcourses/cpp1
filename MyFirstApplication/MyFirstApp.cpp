#include <iostream>
#include <string>

using namespace std;

int add(int num1, int num2) {
	return num1 + num2;
}

void print(string text) {
	cout << text << endl;
}

void print(int num1) {
	cout << num1 << endl;
}

void print(int num1, int num2) {
	cout << num1 << " " << num2 << endl;
}

int main() {
	int result = add(52, 131);

	cout << result << endl;
	print("Hello world");
	print(32);
	print(45, 65);

	return 0;
}