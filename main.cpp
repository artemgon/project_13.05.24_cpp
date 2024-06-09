#include <iostream>
using namespace std;

int main() {
	char user_decision;
	cout << "Please, enter the letter (a-e) to see the figure: ";
	cin >> user_decision;
	switch (user_decision)
	{
	case 'a': 
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (i <= j) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		break;
	case 'b':
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (i >= j) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		break;
	case 'c': 
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (i + j <= 5 && i <= j) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		break;
	case 'd':
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (i + j >= 5 && i >= j) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		break;
	case 'e':
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (i + j <= 5 && i <= j or i + j >= 5 && i >= j) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		break;
	default:
		cout << "You've entered invalid value. Please, try again";
		break;
	}
	return 0;
}