#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string N1, N2;
	cin >> N1 >> N2;

	reverse(N1.begin(), N1.end());
	reverse(N2.begin(), N2.end());

	if (N1 > N2) {
		cout << N1;
	}
	else {
		cout << N2;
	}
}