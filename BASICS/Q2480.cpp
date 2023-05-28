#include <iostream>
using namespace std;

int exchange_money(int dice1, int dice2, int dice3);

int main() {
	int dice1, dice2, dice3;
	
	cin >> dice1 >> dice2 >> dice3;

	cout << exchange_money(dice1, dice2, dice3);
}

int exchange_money(int dice1, int dice2, int dice3) {
	if (dice1 == dice2 && dice2 == dice3) {
		return 10000 + dice1 * 1000;
	}
	else if (dice1 == dice2) {
		return 1000 + dice1 * 100;
	}
	else if (dice2 == dice3) {
		return 1000 + dice2 * 100;
	}
	else if (dice3 == dice1) {
		return 1000 + dice3 * 100;
	}
	else {
		if (dice1 > dice2 && dice1 > dice3) {
			return dice1 * 100;
		}
		else if (dice2 > dice1 && dice2 > dice3) {
			return dice2 * 100;
		}
		else {
			return dice3 * 100;
		}
	}

}