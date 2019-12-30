#include <iostream>
#include <string>

using namespace std;

int main() {
	int level = 34;
	int experience_max = 300;
	int experience_current = 122;
	bool flow = true;
	int exp_gain;

	string hasToMatch = "hello";
	string user_input;

	while (flow == true) {
		cin >> user_input;

		// "hello" == "hello"
		// true

		if (user_input == hasToMatch) {
			cout << "The words match" << endl;
		} else if (user_input == "q") {
			cout << "Are you sure you want to quit?" << endl;

		} else {
			cout << "No Matches" << endl;
		}

	}


	// string phrase;

	// cout << "Enter your phrase: ";

	// cin >> phrase;
	// std::getline(cin, phrase);

	// cout << "Phrase is: " << phrase << endl;

	// experience_current = experience_current + 6;
	// experience_current *= 10;

	cout << "My Level is " << level << endl;
	cout << "My current exp is " << experience_current << endl;

	while (flow == true) {
		cout << "My Level is " << level << endl;
		cout << "My current exp is " << experience_current << endl;

		cout << "Enter EXP Gain (ctrl+c to exit): ";
		cin >> exp_gain;

		if (exp_gain) {
			experience_current += exp_gain;

			if (experience_current >= experience_max) {
				level += 1;
				experience_current -= experience_max;
				exp_gain = 0;
			}
		}


	}

	return 0;
}