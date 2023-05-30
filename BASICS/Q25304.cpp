#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int price;
	cin >> price;

	int num; cin >> num;

	int sum = 0;
	for (int i = 0; i < num; i++) {
		int obj_price, obj_num;
		cin >> obj_price >> obj_num;

		sum += obj_price * obj_num;
	}

	if (sum == price) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}