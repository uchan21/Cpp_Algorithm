#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	while (1) {
		int flag = 0;
		string str; stack<char> stk;
		getline(cin, str, '.');

		if (str.size()==1) {
			return 0;
		}

		for (int i = 0; i < str.size(); i++) {
			if (str.at(i) == '(' || str.at(i) == '[') {
				stk.push(str.at(i));
			}
			if (stk.empty()) {
				if (str.at(i) == ')' || str.at(i) == ']') {
					flag = 1;
					cout << "no" << endl; break;
				}
			}
			else {
				if (str.at(i) == ')') {
					if (stk.top() == '(') {
						stk.pop();
					}
					else {
						flag = 1;
						cout << "no" << endl; break;
					}
				}
				else if (str.at(i) == ']') {
					if (stk.top() == '[') {
						stk.pop();
					}
					else {
						flag = 1;
						cout << "no" << endl; break;
					}
				}
			}
		}

		if (flag == 0) {
			if (stk.size() == 0) {
				cout << "yes" << endl;
			}
			else {
				cout << "no" << endl;
			}
		}
	}
}