#include <iostream>

using namespace std;

/* This program prompts the user for the current year, the user's 
 * current age, and another year. It then calculates the age that
 * the user was or will be in the second year entered
 */

int main()
{
	int year_now, age_now, another_year, another_age;

	cout << "Enter the current year and then press RETURN. \n";
	cin >> year_now;

	cout << "Enter your current age in years. \n";
	cin >> age_now;

	cout << "Enter the year for which you wish to know your age. \n";
	cin >> another_year;

	another_age = (another_year - year_now) + age_now;
		
	if(another_age > 150) {
		cout << "Sorry, but you'll probably be dead by ";
		cout << another_year << "!\n";
	}
	if(another_age >= 0) {
		cout << "Your age in " << another_year << ": ";
		cout << another_age << "\n";
	} else { 
		cout << "You weren't even born in " << another_year << "!\n";
	}
	return 0;
}
