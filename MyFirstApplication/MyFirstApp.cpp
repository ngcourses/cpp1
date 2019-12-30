#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Person {
	string name;
	int age;
};

int main() {
	Person person1;

	person1.name = "Nick";
	person1.age = 30;

	Person person2;

	person2.name = "Ted";
	person2.age = 46;

	vector<Person> people = { person1, person2 };

	Person person3;
	person3.name = "Sally";
	person3.age = 35;

	people.push_back(person3);

	for (int i = 0; i < people.size(); i++) {
		cout << " --- PERSON " << i << " --- " << endl;
		cout << "Name: " << people[i].name << endl;
		cout << "Age: " << people[i].age << endl;
		cout << " ---------------- " << endl; 
	}

	//return 0;
}