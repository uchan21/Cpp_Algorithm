#include <deque>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void command(deque<int>& array, string cmd);

int main() {
	deque<int> array;
	int N; cin >> N; string cmd;
	for (int i = 0; i < N; i++) {
		cin >> cmd;
		command(array, cmd);
	}
}

void command(deque<int>& array, string cmd) {
	if (cmd == "push_front") {
		int num; cin >> num;
		array.push_front(num);
		return;
	}
	if (cmd == "push_back") {
		int num; cin >> num;
		array.push_back(num);
		return;
	}
	if (cmd == "pop_front") {
		if (array.empty()) {
			cout << "-1" << endl;
			return;
		}
		else {
			cout << array.front() << endl;
			array.pop_front(); return;
		}
	}
	if (cmd == "pop_back") {
		if (array.empty()) {
			cout << "-1" << endl;
			return;
		}
		else {
			cout << array.back() << endl;
			array.pop_front(); return;
		}
	}
	if (cmd == "size") {
		cout << array.size() << endl; return;
	}
	if (cmd == "empty") {
		cout << array.empty() << endl;
	}
	if (cmd == "front") {
		if (array.empty()) {
			cout << "-1" << endl; return;
		}
		else {
			cout << array.front() << endl; return;
		}
	}
	if (cmd == "back") {
		if (array.empty()) {
			cout << "-1" << endl; return;
		}
		else {
			cout << array.back() << endl; return;
		}
	}
}