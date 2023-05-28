#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N, cmd;
	cin >> N;

	stack<int> stk;

	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == 0) {
			if (stk.empty()) {
				cout << "error" << endl; return -1;
			}
			else {
				stk.pop();
			}
		}
		else {
			stk.push(cmd);
		}
	}
	int sum = 0;
	int size = stk.size();
	for (int i = 0; i < size; i++) {
		sum += stk.top(); stk.pop();
	}
	cout << sum;
}