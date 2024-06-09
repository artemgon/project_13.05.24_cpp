#include <iostream>
using namespace std;

int main() {
	int price, revenue = 0, sum = 0, user_choice, quantity, discount, t_quantity = 100, c_quantity = 30, b_quantity = 70, r_quantity = 30;
	for (;;)
	{
		cout << "What are you gonna buy?" << " Select \"t\" for tangerines, \n \"c\" for christmas" <<
			"tree, \"b\" for christmas ball, \"r\" for tree topper, 0 if you want to exit " 
			<< "and 1 if you want to end with current customer: ";
		cin >> user_choice;
		if (user_choice == 0) break;
		switch (user_choice)
		{
		case 't':
			cout << "Please, enter the price of one tangerine: ";
			cin >> price;
			cout << "Please, enter the quanity of tangerines: ";
			cin >> quantity;
			if (quantity > t_quantity or t_quantity == 0) {
				cout << "We won't be able to sell this product to you";
				break;
			}
			else {
				t_quantity -= quantity;
				cout << "Are there any discounts?(type 'y' for yes and 'n' for no)";
				cin >> user_choice;
				switch (user_choice)
				{
				case 'y':
					cout << "Please, enter the discount";
					cin >> discount;
					sum += price * quantity - price * quantity / discount;
					cout << "The price is " << price * quantity - price * quantity / discount;
					revenue += sum;
					break;
				case 'n':
					sum += price * quantity;
					cout << "The price is " << price * quantity;
					revenue += sum;
					break;
				default:
					cout << "You've entered invalid value. Please, try again.";
					break;
				}
				break;
			}
		case 'c':
			cout << "Please, enter the price of one christmas tree: ";
			cin >> price;
			cout << "Please, enter the quanity of christmas trees: ";
			cin >> quantity;
			if (quantity > c_quantity or c_quantity == 0) {
				cout << "We won't be able to sell this product to you";
				break;
			}
			else {
				c_quantity -= quantity;
				cout << "Are there any discounts?(type 'y' for yes and 'n' for no)";
				cin >> user_choice;
				switch (user_choice)
				{
				case 'y':
					cout << "Please, enter the discount";
					cin >> discount;
					sum += price * quantity - price * quantity / discount;
					cout << "The price is " << price * quantity - price * quantity / discount;
					revenue += sum;
					break;
				case 'n':
					sum += price * quantity;
					cout << "The price is " << price * quantity;
					revenue += sum;
					break;
				default:
					cout << "You've entered invalid value. Please, try again.";
					break;
				}
				break;
			}
		case 'b':
			cout << "Please, enter the price of one christmas ball: ";
			cin >> price;
			cout << "Please, enter the quanity of christmas balls: ";
			cin >> quantity;
			if (quantity > b_quantity or b_quantity == 0) {
				cout << "We won't be able to sell this product to you";
				break;
			}
			else {
				b_quantity -= quantity;
				cout << "Are there any discounts?(type 'y' for yes and 'n' for no)";
				cin >> user_choice;
				switch (user_choice)
				{
				case 'y':
					cout << "Please, enter the discount";
					cin >> discount;
					sum += price * quantity - price * quantity / discount;
					cout << "The price is " << price * quantity - price * quantity / discount;
					revenue += sum;
					break;
				case 'n':
					sum += price * quantity;
					cout << "The price is " << price * quantity;
					revenue += sum;
					break;
				default:
					cout << "You've entered invalid value. Please, try again.";
					break;
				}
				break;
			}
		case 'r':
			cout << "Please, enter the price of one tree topper: ";
			cin >> price;
			cout << "Please, enter the quanity of tree toppers: ";
			cin >> quantity;
			if (quantity > r_quantity or r_quantity == 0) {
				cout << "We won't be able to sell this product to you";
				break;
			}
			else {
				r_quantity -= quantity;
				cout << "Are there any discounts?(type 'y' for yes and 'n' for no)";
				cin >> user_choice;
				switch (user_choice)
				{
				case 'y':
					cout << "Please, enter the discount";
					cin >> discount;
					sum += price * quantity - price * quantity / discount;
					cout << "The price is " << price * quantity - price * quantity / discount;
					revenue += sum;
					break;
				case 'n':
					sum += price * quantity;
					cout << "The price is " << price * quantity;
					revenue += sum;
					break;
				default:
					cout << "You've entered invalid value. Please, try again.";
					break;
				}
				break;
			}
		case 1: 
			cout << "The sum is " << sum;
			cout << "The revenue is " << revenue;
			sum = 0;
			break;
		default:
			cout << "You've entered invalid value. Please, try again.";
			break;
		}
	}
	return 0;
}