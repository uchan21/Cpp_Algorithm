#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int num; string cmd;
string push = "push", pop = "pop", sizeofstk = "size", emptyofstk = "empty", topofstk = "top";

void command(stack<int>& stk);

int main() {
	int N;
	cin >> N;

	stack<int> stk;
	
	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == push) {
			cin >> num;
		}
		command(stk);
	}
}

void command(stack<int>& stk) {
	if (cmd == push) {
		stk.push(num);
		return;
	}else
	if (cmd == pop) {
		if (stk.size() == 0) {
			cout << "-1" << endl;
		}
		else {
			cout << stk.top() << endl;
			stk.pop();
			return;
		}
	}else

	if (cmd == sizeofstk) {
		cout << stk.size() << endl;
		return;
	}else

	if (cmd == emptyofstk) {
		if (stk.empty() == 1) {
			cout << "1" << endl;
		}
		else {
			cout << "0" << endl;
		}
		return;
	}else

	if (cmd == topofstk) {
		if (stk.size() == 0) {
			cout << "-1" << endl;
		}
		else {
			cout << stk.top() << endl;
			return;
		}
	}

	else {
		cout << "command error" << endl;
	}
}
