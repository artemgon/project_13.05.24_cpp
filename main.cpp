#include <iostream>
using namespace std;

int main() {
	int min_value, max_value, a;
	cout << "Please, enter minimum value of range: ";
	cin >> min_value;
	cout << "Please, enter max value of range: ";
	cin >> max_value;
	cout << "Please, enter the number of this range: ";
	cin >> a;
	for (;;)
	{
		if (a < min_value || a > max_value)
		{
			cout << "Try again: ";
			cin >> a;
		}
		else break;
	}
	cout << "Good job!";
	return 0;                                   
}