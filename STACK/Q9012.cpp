#include <stack>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main() {
	int N;
	cin >> N;
	getchar();

	char sym;

	int flag = 0;

	for (int i = 0; i < N; i++) {

		stack<char> stk;
		string str;
		getline(cin,str);

		for (int j = 0; j < str.size(); j++) {
			sym = str.at(j);

			if (sym == '(') {
				stk.push(sym);
			}
			else if (sym == ')') {
				if (stk.empty()) {
					cout << "NO" << endl;
					flag = 1;
					break;
				}
				stk.pop();
			}
		}

		if (flag == 0) {
			if (stk.size() == 0) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
		flag = 0;
	}

	
}
