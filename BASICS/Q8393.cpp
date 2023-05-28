#include <iostream>
using namespace std;

int sum(int N);

int main() {
	int N; cin >> N;

	cout << sum(N);
}

int sum(int N) {
	int rtn = 0;
	for (int i = 1; i <= N; i++) {
		rtn += i;
	}
	return rtn;
}