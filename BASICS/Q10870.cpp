#include <iostream>
using namespace std;

int Recur(int num);

int main() {
	int N; cin >> N;

	cout << Recur(N);
}

int Recur(int num) {
	if (num == 0) {
		return 0;
	}
	if (num == 1) {
		return 1;
	}

	return Recur(num - 1) + Recur(num - 2);
}