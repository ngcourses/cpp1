#include <iostream>
#include <string>

using namespace std;


int main() {
	// var 2 is CREATED with value of 200
	int var2 = 200;

	// var 3 is CREATED POINTING to the address space of var2
	int* var3 = &var2;

	int var4 = var2;

	// We can now update var 2
	var2 = 500;

	cout << "Var2 Address Location: " << &var2 << endl;
	cout << "Var4 Value: " << var4 << endl;

	// And when we DEREFERENCE var3 to toggle between displaying
	// Address space and value AT that address space,
	// var 3 simply points to the address space of var 2,
	// thus, getting the NEW and updated value stored at var2
	cout << "Var3 Value: " << *var3 << endl;

	return 0;
}